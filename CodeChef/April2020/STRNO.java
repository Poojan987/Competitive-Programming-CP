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
public class STRNO {
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
        
        
        int t=input.nextInt();
        
        for(int i=0;i<t;i++)
        {
            int x=input.nextInt();
            int k=input.nextInt();
            
            
            if(x<=k)
                System.out.println("0");
            else if(k==1)
                System.out.println("1");
            else if(k==2)
            {
                if(x%2==0)
                    System.out.println("1");
                else if(isPrime(x))
                    System.out.println("0");
                else
                    System.out.println("1");
            
            }
                    
        
        }
    }
    
}
