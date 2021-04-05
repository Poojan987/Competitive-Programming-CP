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
import java.util.Arrays;
public class CARSELL {
    public static void main(String[] args) {
        
        Scanner input=new Scanner(System.in);
        int t=input.nextInt();
        
        
        for(int i=0;i<t;i++)
        {
            int n=input.nextInt();
            int p[]=new int[n];
            
            for(int j=0;j<n;j++)
            {
                p[j]=input.nextInt();
            }
            
            
            
            
            Arrays.sort(p);
            
            int max=p[n-1];
            
            int count=1;
            for(int k=n-2;k>=0;k--)
            {
                if(p[k]-count<0)
                    p[k]=0;
                else 
                    p[k]=p[k]-count;
                
                max=(max+p[k])%1000000007;
                count++;
            }
            
            System.out.println(max%1000000007);
            
            
            
        
        
        }
    }
    
}
