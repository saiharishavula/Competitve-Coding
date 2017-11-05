import java.util.*;
import java.lang.Math;
public class Thenumberofpositions {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int a = scan.nextInt();
		int b = scan.nextInt();
		n = n-a-1;
		System.out.println(Math.min(n,b)+1);

	} 

}
