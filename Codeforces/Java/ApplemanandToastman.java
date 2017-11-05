import java.util.*;
import java.lang.Math;

/* see the integer overflow carefully and syntax for typecasting  */

public class ApplemanandToastman {

	public static void main(String[] args) {
		
    Scanner scan  = new Scanner(System.in);
    int n = scan.nextInt();
    int a[] = new int[n+1];
    long sum=0;
    for(int i=0;i<n;i++)
    {
    	a[i] = scan.nextInt();
    	sum+=(long)a[i];
    }
    Arrays.sort(a,0,n);
    for(int i=0;i<n-1;i++)
    {
    	sum+=(long)(i+1)*a[i];
    }
    sum+=(long)(n-1)*a[n-1];
    System.out.println((long)sum);
    
	}

}
