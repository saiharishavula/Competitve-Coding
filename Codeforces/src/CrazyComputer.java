import java.util.*;
public class CrazyComputer {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
       Scanner scan = new Scanner(System.in);
       int n = scan.nextInt();
       int k = scan.nextInt();
       int curr;
       int prev = scan.nextInt();
       int count=1;
       for(int i=1;i<n;i++)
       {
    	   curr = scan.nextInt(); 
    	   
    	   if((curr-prev)>k)
    		   count=1;
    	   else
              count++;
    	   prev = curr;
    	  // System.out.print(count+" ");
       }
       System.out.println("\n"+count);
	}

}
