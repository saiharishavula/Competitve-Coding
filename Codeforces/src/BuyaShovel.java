import java.util.Arrays;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.Comparator;
import java.io.IOException;
import java.util.StringTokenizer;
public class BuyaShovel
{
    public static void main(String[]args)
    {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        TaskB solver = new TaskB();
        solver.solve(1,in,out);
        out.close();
    }
}
class TaskB
{
   public void solve(int testNumber, InputReader in, PrintWriter out)
	 {
      
	int n = in.nextInt();
    int r = in.nextInt();
    int temp = n;
    n = n%10;
    int i=1;
    for(;i<10;)
    {
    	if(n%10==0 || n%10==r)
    		break;
    	i++;
    	n = (temp*i)%10;
    }
    out.println(i);
  }
}
class InputReader
{
    public BufferedReader reader;
    public StringTokenizer tokenizer;
    public InputReader(InputStream stream){
        reader = new BufferedReader(new InputStreamReader(stream), 32768);
        tokenizer = null;
    }
    public String next(){
        while (tokenizer == null || !tokenizer.hasMoreTokens()){
            try{
                tokenizer = new StringTokenizer(reader.readLine());
            }
            catch (IOException e){
                throw new RuntimeException(e);
            }
        }
        return tokenizer.nextToken();
    }
    public int nextInt() {
        return Integer.parseInt(next());
    }
}

