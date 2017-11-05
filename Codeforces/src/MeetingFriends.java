//import java.lang.reflect.Array;
import java.util.*;
import java.util.Arrays;
public class MeetingFriends {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner scan = new Scanner(System.in);
		
		int a[] = new int[3];
		for(int i=0;i<3;i++)
		{
			a[i] = scan.nextInt();
		}
		Arrays.sort(a);
		int sum=0;
		for(int i=0;i<3;i++)
		{
			sum+=Math.abs(a[1]-a[i]);
		}
		System.out.println(sum);

	}

}
