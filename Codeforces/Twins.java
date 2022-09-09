import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Twins{
    public static void main(String[] args) {
        FScanner fs=new FScanner();
        PrintWriter out=new PrintWriter(System.out);
        int n=fs.nextInt();
        int coins[] = new int[n];
        int total = 0;
        for(int i=0; i<n; i++){
            coins[i]=fs.nextInt();
            total+=coins[i];
        }
        int sum=0, count=0;
        Arrays.sort(coins);
        for(int i=n-1; i>=0; i--){
            if(sum > total/2) break;
            count++;
            sum+=coins[i];
        }
        out.println(count);
        out.close();
    }
    static class FScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");
        String next() {
            while(!st.hasMoreTokens())
                try{
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e){
                    e.printStackTrace();
                }
            return st.nextToken();
        }
        int nextInt() {
            return Integer.parseInt(next());
        }
        int[] readArray(int n){
            int[] a = new int [n];
            for(int i=0; i<n; i++) a[i] = nextInt();
            return a;
        }
        long nextLong(){
            return Long.parseLong(next());
        }
    } 
}


