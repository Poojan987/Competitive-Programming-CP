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
public class unitGcd3 {
    
     static  boolean isPrime(int n){
         boolean b=true;
         
         if(n==2 || n==1)
             b=true;
         else if(n%2==0)
             b=false;
         else{
             for(int i=3;i<=Math.sqrt(n);i++)
             {
                 if(i%n==0)
                     b=false;
             }    
         }
         return b;
    }
    
    
    public static void main(String[] args) {
        
        Scanner input=new Scanner(System.in);
        
        
        int prime[]={2,3,5, 7 ,11 ,13 ,17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
        
        int t=input.nextInt();
        for(int i=0;i<t;i++)
        {
            int n=input.nextInt();
            
            int arr[]=new int[n];
            for(int j=0;j<n;j++)
            {
                arr[j]=j+1;
                
            }
            int asdf=0,count=0;
            
             System.out.println(n/2);
            
            
            
            while(prime[asdf]<=n)
            {
                System.out.printf(" %d",prime[asdf]);
                asdf++;
            }
            
           System.out.printf("1");
            
            while(prime[asdf]<=n)
            {
                System.out.printf(" %d",prime[asdf]);
                asdf++;
            }
            
            for(int k=2;k<=n;k++)
            
            
        
        }
        
        
    }
}
