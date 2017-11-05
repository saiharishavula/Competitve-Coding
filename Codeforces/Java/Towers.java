import java.util.*;
public class Towers {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan =  new Scanner(System.in);
		int n = scan.nextInt();
		int a[] = new int[1005];
		for(int i=0;i<n;i++)
		{
			int temp = scan.nextInt();
			a[temp]++;
			
		}
		int max = 0,count=0;
		for(int i=1;i<=1000;i++)
		{
			if(max<a[i])
				max = a[i];
			if(a[i]!=0)
				count++;
		}
       System.out.println(max+" "+count);
	}

}
