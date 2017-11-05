import java.util.*;
public class AandBandChess {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	   Scanner s = new Scanner(System.in);
       int white=0,black=0;
       for(int i=0;i<8;i++){
    	   String temp = s.nextLine();
    	   for(int j=0;j<temp.length();j++){
    		   if(temp.charAt(j)<='Z' && temp.charAt(j)>='A'){
    			   if(temp.charAt(j)=='Q')
    				   white+=9;
    			   if(temp.charAt(j)=='R')
    				   white+=5;
    			   if(temp.charAt(j)=='B')
    				   white+=3;
    			   if(temp.charAt(j)=='N')
    				   white+=3;
    			   if(temp.charAt(j)=='P')
    				   white+=1;
    		   }
    		   else
    			   if(temp.charAt(j)<='z' && temp.charAt(j)>='a'){
        			   if(temp.charAt(j)=='q')
        				   black+=9;
        			   if(temp.charAt(j)=='r')
        				   black+=5;
        			   if(temp.charAt(j)=='b')
        				   black+=3;
        			   if(temp.charAt(j)=='n')
        				   black+=3;
        			   if(temp.charAt(j)=='p')
        				   black+=1;
        		   }
    	   }
       }
       if(white>black)
    	   System.out.println("White");
       else
    	   if(white<black)
    		   System.out.println("Black");
    	   else
    		   System.out.println("Draw");
    		   
	}

}
