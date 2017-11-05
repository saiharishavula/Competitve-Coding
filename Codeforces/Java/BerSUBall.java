import java.util.*;
public class BerSUBall {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int a[] = new int[n];
		for(int i=0;i<n;i++)
			a[i] = scan.nextInt();
		int m = scan.nextInt();
		int b[] = new int[m];
		for(int i=0;i<m;i++)
			b[i] = scan.nextInt();
		Arrays.sort(a);
		Arrays.sort(b);
		int i=0,j=0;
		int count=0;
		for(;i<n;i++)
		{
			for(;j<m;j++)
			{
				if(Math.abs(a[i]-b[j])<=1)
				{
					count++;
					j++;
					break;
				}
				else
					if(b[j]>a[i])
						break;
			}
		}
		System.out.println(count);
		

	}

}
