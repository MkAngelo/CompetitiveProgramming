import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

// Rename to Solution!
public class WayTooLongWords{
    public static void main(String[] args){
        FastScanner fs = new FastScanner();
        int T=fs.nextInt();
        for(int tt=1; tt<=T; tt++){
            //System.out.println("Case #"+tt+": " );
            String word = fs.next();
            if(word.length() < 11)
                System.out.println(word);
            else{
                String len = Integer.toString(word.length() - 2);

                char[] wchar = word.toCharArray();
                System.out.println(wchar[0] + len + wchar[Integer.parseInt(len)+1]);
            }
        }
    }

    static class FastScanner {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st=new StringTokenizer("");
        String next() {
            while(!st.hasMoreTokens())
                try {
                    st=new StringTokenizer(br.readLine());
                } catch(IOException e){
                    e.printStackTrace();
                }
            return st.nextToken();
        }
        
        int nextInt(){
            return Integer.parseInt(next());
        }
        int[] readArray(int n){
            int[] a = new int[n];
            for(int i=0; i<n; i++) a[i]=nextInt();
            return a;
        }
        long nextLong() {
            return Long.parseLong(next());
        }
    }
}
