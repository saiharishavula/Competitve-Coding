import java.util.*;
import java.math.BigInteger;
public class PashmakandFlowers {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int a[] = new int[n];
		for(int i=0;i<n;i++)
			a[i] = scan.nextInt();
		int max = Integer.MIN_VALUE;
		int min = Integer.MAX_VALUE;
		for(int i=0;i<n;i++){
			if(max<a[i])
				max = a[i];
			if(min>a[i])
				min = a[i];
		}
		int min_c=0,max_c=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==max)
				max_c++;
			if(a[i]==min) 
				min_c++;
		}
	   System.out.print(max-min+" ");
	   if(max==min)
		   System.out.print(n*1L*(n-1)/2);
	   else
		   System.out.print(min_c*1L*max_c);
	   
	}

}
