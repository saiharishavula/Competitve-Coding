import java.util.*;
public class GukiZandContest {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int a[] = new int[2001];
		
		int n = scan.nextInt();
		int array[] = new int[n];
		for(int i=0;i<n;i++)
		{
			array[i] = scan.nextInt();
			a[array[i]]++;
		}
        int count = 0;
        for(int i=2000;i>=1;i--)
        {
        	if(a[i]!=0)
        	{
        		int temp = a[i];
        		a[i] = count+1;
        		count+=temp;
        	}
        }
        for(int i=0;i<n;i++)
        	System.out.print(a[array[i]]+" ");
	}

}
