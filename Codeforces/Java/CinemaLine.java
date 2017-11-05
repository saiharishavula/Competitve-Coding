import java.util.*;
public class CinemaLine {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int a[] = new int[n];
		for(int i=0;i<n;i++)
			a[i] = scan.nextInt();
		int x=0,y=0,z=0;
		boolean flag = true;
		for(int i=0;i<n;i++)
		{
			if(a[i]==25)
				x++;
			if(a[i]==50)
			{
				y++;
				if(x==0)
					flag = false;
				else
					x--;
				
			}
			if(a[i]==100)
			{
				z++;
				if((x>=1 && y>=1)|| (x>=3))
				{
					if(x>=1 && y>=1)
					{
						x--;
						y--;
					}
					else
						x-=3;
				}
				else
					flag = false;
			}
		}
		if(flag)
			System.out.println("YES");
		else
			System.out.println("NO");

	}

}
