import java.util.*;
public class PresentfromLena {

	public static void main(String[] args) {
		 Scanner scan = new Scanner(System.in);
		 int n = scan.nextInt();
		 for(int i=0;i<=n;i++)
		 {
			 for(int j=0;j<(n-i);j++)
				 System.out.print("  ");
			 for(int j=0;j<i;j++)
			 {
				 if(j!=0)
				 System.out.print(" "+j);
				 else
					 System.out.print(j); 
			 }
			 if(i!=0)
			 System.out.print(" "+i);
			 else
				 System.out.print(i);
			 
			 for(int j=i-1;j>=0;j--)
				 System.out.print(" "+j);
			
               System.out.print("\n");
		 }
		 for(int i=0;i<n;i++)
		 {
			 for(int j=0;j<=i;j++)
				 System.out.print("  ");
			 for(int j=0;j<(n-i);j++)
			 {
				 if(j==0)
					 System.out.print(j);
				 else
				 System.out.print(" "+j);
			 }
			 
			 for(int j=(n-i-2);j>=0;j--)
				 System.out.print(" "+j);
			
			 System.out.print("\n");
		 }


	}

}
