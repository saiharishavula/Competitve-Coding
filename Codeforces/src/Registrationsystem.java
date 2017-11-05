import java.util.*;
import java.util.HashMap;
import java.util.Map;
public class Registrationsystem {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n =scan.nextInt();
		HashMap<String,Integer> m = new HashMap<String,Integer>();
		for(int i=0;i<n;i++)
		{
			String s = scan.next();
			if(!m.containsKey(s))
			{
				System.out.println("OK");
				m.put(s,1);
			}
			else
			{
				System.out.println(s+m.get(s));
				int c = m.get(s);
				c++;
				m.put(s,c);
			}
			
		}
	}

}
