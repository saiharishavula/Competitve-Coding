import java.util.*;
public class RandomTeams {

	public static void main(String[] args) {
		
		Scanner scan =  new Scanner(System.in);
		int n = scan.nextInt();
		int m = scan.nextInt();
		long max = n-m+1;
		max = max*(max-1)/2;
		long temp = n/m;
		long rem = n%m;
		long temp1 = m-rem;
		long min = temp1*(temp*(temp-1)/2)+rem*(temp*(temp+1)/2);
		
		System.out.print(min+" "+max);
	}

}
