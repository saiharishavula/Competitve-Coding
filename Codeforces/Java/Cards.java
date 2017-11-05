import java.util.*;
public class Cards {

	public static void main(String[] args) {
		Scanner scan =  new Scanner(System.in);
		int n = scan.nextInt();
		int a[] = new int[n+1];
		int res = 0;
		for(int i=0;i<n;i++)
		{
			a[i] = scan.nextInt();
			res+=a[i];
		}
		res/=(n/2);
		//System.out.println(res);
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(res-a[i] == a[j])
				{
					System.out.println((i+1)+" "+(j+1));
					a[j] = 0;
					break;
				}
			}
		}

	}

}
