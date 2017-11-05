import java.util.*;
import java.math.BigInteger;
public class WetSharkandOddandEven {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		//BigInteger sum = new BigInteger("0");
		int n =scan.nextInt();
		long fina=0;
		int min = Integer.MAX_VALUE;
		for(int i=0;i<n;i++)
		{
			int t = scan.nextInt();
			fina+=t;
			if(t%2==1)
			{
				if(min>t)
					min = t;
			}
				
		}
		if(fina%2==0)
			System.out.println(fina);
		else
			System.out.println(fina-min);
	}

}
