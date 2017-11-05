import java.util.*;
//static public int a[] = new int[100005];
public class Worms {
	static int a[] = new int[100005];
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		
		a[0] = 0;
		for(int i=1;i<=n;i++)
		{
			a[i] = scan.nextInt();
			a[i]+=a[i-1];
		}
		int m = scan.nextInt();
		int temp;
		int s;
		int e,mid;
		for(int i=0;i<m;i++)
		{
			temp = scan.nextInt();
			s = 1;
			e = n;
			while(s<e)
			{
			    mid = (s+e)/2;
				if(a[mid]>=temp)
					e = mid;
				else
					s = mid+1;
			}
			System.out.println(s);
		}

	}

}
