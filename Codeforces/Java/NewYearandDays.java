import java.util.*;
public class NewYearandDays {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String s = scan.nextLine();
		char a[] = new char[20];
		a = s.toCharArray();
		if(s.length()>9)
		{
			int n;
			n = a[0]-'0';
			if(a[1]!=' ')
			{
				n*=10;
				n+=(a[1]-'0');
			}
			if(n==31)
				System.out.println("7");
			else
				if(n==30)
					System.out.println("11");
				else
					System.out.println("12");
			
		}
		else
		{
			int n;
			n = a[0]-'0';
			if(n==5 || n==6)
				System.out.println("53");
			else
				System.out.println("52");
			
		}
		
	}

}
