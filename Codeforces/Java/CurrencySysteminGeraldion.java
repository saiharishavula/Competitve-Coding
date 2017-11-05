import java.util.*;
public class CurrencySysteminGeraldion {

	public static void main(String[] args) {
		Scanner scan =  new Scanner(System.in);
		int n = scan.nextInt();
		int min = Integer.MAX_VALUE;
		for(int i=0;i<n;i++)
		{
			int temp;
			temp = scan.nextInt();
			if(temp<min)
				min = temp;
			
		}
		if(min==1)
			System.out.println("-1");
		else
			System.out.println("1");
			

	}

}
