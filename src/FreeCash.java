import java.util.*;
public class FreeCash {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int a[] = new int[n];
		int b[] = new int[n];
		for(int i=0;i<n;i++){
			a[i] = scan.nextInt();
			b[i] = scan.nextInt();
		}
		int c=1;
		int sum=1;
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1] && b[i]==b[i+1])
				c++;
			else
				c=1;
			if(sum < c)
				sum=c;
		}
		System.out.print(sum);

	}

}
