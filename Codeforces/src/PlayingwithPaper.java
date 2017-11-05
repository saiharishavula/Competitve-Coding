import java.util.*;
public class PlayingwithPaper {
	public static long min(long a,long b)
	{
		return a<b?a:b;
	}
	public static long max(long a,long b)
	{
		return a>b?a:b;
	}

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		long x = scan.nextLong();
		long y = scan.nextLong();
        boolean flag = true;
        long count = 0;
        
        while(flag)
        {
        	long rem = y%x;
        	count+=(y/x);
        	if(rem==0)
        	 flag=false;
            y = x;
            x = rem;
        }
		System.out.println(count);

	}

}
