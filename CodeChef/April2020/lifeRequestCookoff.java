/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package April;

/**
 *
 * @author poojan
 */
import java.util.Scanner;
public class lifeRequestCookoff {
    
    
    public static void main(String[] args) {
        
        
        Scanner input=new Scanner (System.in);
        
        
        
        int t=input.nextInt();
        
        
        for(int i=0;i<t;i++)
        {
        
            int n=input.nextInt();
            int q=input.nextInt();
                
            long sum=0;
            
            int f[]=new int[q];
            int d[]=new int[q];
            
            
            
            for(int j=0;j<q;j++)
            {
                f[j]=input.nextInt();
                d [j]=input.nextInt();
                
                
//                sum=Math.abs(sum-f)+
            }
            sum=Math.abs(f[0]+Math.abs(f[0]-d[0]));
            sum=sum+Math.abs(d[0]-f[1]);
            int j=0;
            for( j=1;j<q-1;j++)
            {
            sum=sum+Math.abs(Math.abs(f[j]-d[j]));
            sum=sum+Math.abs(d[j]-f[j+1]);
                
            
            }
            sum=sum+Math.abs(Math.abs(f[j]-d[j]));
            
            
            System.out.println(sum);
        }
        
        
    }
}
