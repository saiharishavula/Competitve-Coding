import java.util.Arrays;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.Comparator;
import java.io.IOException;
import java.util.StringTokenizer;

public class laptops
{
    public static void main(String[]args)
    {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        TaskA solver = new TaskA();
        solver.solve(1,in,out);
        out.close();
    }
}

class TaskA
{

    static class lap
    {
        int l,p;
    }

    int n;

    public void solve(int testNumber, InputReader in, PrintWriter out)
    {
        n = in.nextInt();
        lap v[] = new lap[n];
        for(int i=0;i<n;++i)
        {
            int a = in.nextInt();
            int b = in.nextInt();
            v[i] = new lap();
            v[i].l = a;
            v[i].p = b;
        }
        Arrays.sort(v, new Comparator<lap>() {
            public int compare(lap o1, lap o2) {
                return o2.l - o1.l;
            }
        });

        boolean ok = false;

        int id = 0;
        for(int i=1;i<n && !ok;++i)
        {
            if(v[i].p>v[id].p)
                ok = true;
            if(v[i].p<v[id].p)
                id = i;
        }
        if(!ok) out.println("Poor Alex");
        else out.println("Happy Alex");

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