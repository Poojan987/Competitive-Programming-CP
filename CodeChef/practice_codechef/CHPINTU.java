/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practice_codechef;

/**
 *
 * @author poojan
 */
import java.util.Scanner;
public class CHPINTU {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        
        int t=input.nextInt();
        
        for(int j=0;j<t;j++)
        {
            
            int n=input.nextInt();
        int m=input.nextInt();
        
        
        
        int sum[]=new int[m+1];
        sum[0]=2500;
        int bool[]=new int [m+1];
        
        int f[]=new int[n];
        int p[]=new int[n];
        
        
        for(int i=0;i<n;i++)
        {
            f[i]=input.nextInt();
            
                bool[f[i]]=1;
            
            
        }
        
        
        
        for(int i=0;i<n;i++)
        {
            p[i]=input.nextInt();
            ///////sum[f[i]]=sum[f[i]]+p[i];
        }
        
        for(int i=0;i<n;i++)
        {
            
            sum[f[i]]=sum[f[i]]+p[i];
            
            
        }
        
        int min=2500;
        for(int i=1;i<=m;i++)
        {
            
            
            if(bool[i]==1 )
            {
                if( min>sum[i])
                {
                    min=sum[i];
                }
            }
            
        }
            System.out.println(min);
        
    }}
    
}
