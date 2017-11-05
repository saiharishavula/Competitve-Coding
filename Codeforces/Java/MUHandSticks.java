import java.util.*;
public class MUHandSticks {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		int a[] = new int[10];
		for(int i=0;i<6;i++)
		{
			int t = scan.nextInt();
			a[t]++;
		}
		int flag1=1;
		int flag2=1;
		for(int i=1;i<=9;i++)
		{
			if(a[i]>=4)
				flag1=0;
			if(a[i]==2 || a[i]==6)
				flag2=0;
		}
		if(flag1==0 && flag2==0)
			System.out.println("Elephant");
		else
			if(flag1==0)
				System.out.println("Bear");
			else
				System.out.println("Alien");
		
		
	}

}
