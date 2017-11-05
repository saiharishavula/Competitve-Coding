import java.util.*;
import java.util.HashMap;
import java.util.Map;
public class ChewbaccaandNumber {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String s = scan.next();
		char[] c = s.toCharArray();
		for(int i=0;i<s.length();i++){
			int temp = c[i]-'0';
			if(temp==9 && i==0)
				continue;
			if(temp>(9-temp)){
				temp = 9-temp;
				c[i] = (char) (temp+'0');
			}
		}
		s = String.valueOf(c);
		System.out.println(s);
	}

}
