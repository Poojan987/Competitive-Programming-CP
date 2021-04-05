/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codechefMarch.COG2002;

/**
 *
 * @author poojan
 */

import java.util.Scanner;
public class MoonyAnd {
    
    public static void main(String[] args) {
        
        
        Scanner input =new Scanner (System.in);
        
        int i,j,n=10,max2=0, b[]={13 ,2 ,7 ,11 ,8 ,4 ,9 ,8 ,5 ,1},c[]={5 ,7 ,18 ,9, 2 ,3 ,0, 11, 8 ,6};
        
        	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
                   // System.out.println(b[i]|b[j]);
                    
//			if(max2<(b[i]|b[j]))
//				max2=b[i]|b[j];
                        
		}
//		          System.out.println(max2);
	}
                
                
                //5 7 18 9 2 3 0 11 8 6
                
                for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
                    System.out.println(c[i]|c[j]);
                    
//			if(max2<(b[i]|b[j]))
//				max2=b[i]|b[j];
                        
		}
//		          System.out.println(max2);
	}
    }
    
}
