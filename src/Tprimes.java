import java.util.*;
public class Tprimes {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		Set hs = new HashSet<>();
		boolean pr[] = new boolean[1000001];
		for(long i=2;i<=1000000;i++)
		{
			if(!pr[(int)i])
			{
				hs.add((long)i*i);
				for (long j = 2*i; j < 1000001L; j+=i) 
					pr[(int)j] = true;
				
			}
		}
		
		for(int i=0;i<n;i++)
		{
			long temp;
			temp = scan.nextLong();
			
			if(hs.contains(temp))
				System.out.println("YES");
			else
				System.out.println("NO");
				
		}

	}

}
