import java.util.*;
import java.lang.Math;
public class GivenLengthandSumofDigits {

	public static void main(String[] args) {
		
       Scanner scan = new Scanner(System.in);
       int m = scan.nextInt();
       int s = scan.nextInt();
       Solve sol = new Solve();
       if(s==0)
       {
    	   if(m==1)
    		   System.out.println("0 0");
    	   else
    		   System.out.println("-1 -1");
       }
       else
       {
    	   if(s>9*m)
    		   System.out.println("-1 -1");
    	   else
    		   System.out.println(sol.getMin(m,s)+" "+sol.getMax(m,s));
       }
	}

}
class Solve{
	public String getMax(int m,int s){
		char res[] = new char[m];
		int curr;
		for(int i=0;i<m;i++)
		{
			 curr = Math.min(9,s);
			 s-=curr;
			 res[i] = (char)(curr+'0');
		}
		return new String(res);
	}
	public String getMin(int m,int s){
		int first = Math.max(s-9*(m-1), 1);
		char res[] = new char[m];
		s-=first;
		res[0] = (char)(first+'0');
		int curr;
		for(int i=m-1;i>0;i--)
		{
			 curr = Math.min(9,s);
			 s-=curr;
			 res[i] = (char)(curr+'0');
		}
		return new String(res);
	}
}
