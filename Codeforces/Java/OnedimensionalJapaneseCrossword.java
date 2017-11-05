import java.util.*;
public class OnedimensionalJapaneseCrossword {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		char s[] = new char[n+1];
		String temp = scan.next();
		s = temp.toCharArray();
		int count=0,i;
		for(i=0;i<n;i++)
		{
			if(s[i]=='B')
				break;
		}
		
		int a[] = new int[n];
		int c=0;
		int flag=0;
		for(;i<n;i++){
			if(s[i]=='W')
			{
				if(flag==1)
				{
					a[c++] = count;
					flag=0;
				}
				count=0;
			}
			else
			{
				count++;
				flag=1;
			}
		}
		if(count!=0)
			a[c++] = count;
		System.out.println(c);
		for(i=0;i<c;i++)
			System.out.print(a[i]+" ");
	}

}
