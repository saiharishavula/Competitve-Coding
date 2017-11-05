import java.util.*;
public class BrainsPhotos {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     Scanner s = new Scanner(System.in);
     int n = s.nextInt();
     int m = s.nextInt();
     int flag=0;
     for(int i=0;i<n;i++)
     {
    	 for(int j=0;j<m;j++)
    	 {
    		 char c = s.next().charAt(0);
    		 if(c=='C' || c=='M' || c=='Y')
    			 flag=1;
    		 
    	 }
     }
     if(flag==1)
    	 System.out.println("#Color");
     else
    	 System.out.println("#Black&White");
	}

}
