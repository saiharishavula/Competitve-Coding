import java.util.*;
public class AsphaltingRoads {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		int a[][] = new int[51][51];
		int b[] = new int[2501];
		int n = scan.nextInt();
		int k=0;
		for(int i=1;i<=n*n;i++){
			int x = scan.nextInt();
			int y = scan.nextInt();
			if(a[x][y]==0)
			{
				for(int j=1;j<=n;j++)
				{
					a[x][j] = -1;
					a[j][y] = -1;
				}
				b[k++] = i;
			}
			
		}
	    Arrays.sort(b,0,k);
			for(int j=0;j<k;j++)
			{
					System.out.print(b[j]+" ");
				
			}
		
		
		
	}

}
