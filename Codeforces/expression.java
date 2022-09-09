import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;
import java.lang.Math;

public class expression{
    public static void main(String[] args) {
        FScanner fs=new FScanner();
        PrintWriter out=new PrintWriter(System.out);
        int a, b, c, sum;
        a = fs.nextInt();
        b = fs.nextInt();
        c = fs.nextInt();

        sum = a+b+c;
        sum = Math.max(sum, (a*b*c));
        sum = Math.max(sum, (a+b)*c);
        sum = Math.max(sum, a*(b+c));
        sum = Math.max(sum, a+(b*c));
        sum = Math.max(sum, (a*b)+c);
        out.println(sum);
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


