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

public class codeForce750A {
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
            
            
            
        int n=input.nextInt();
        
        for(int i=0;i<n;i++)
        {
            double num=input.nextDouble();
            
            if(num==1)
                System.out.println("NO");
            
          else  if(Math.sqrt(num)==(int)Math.sqrt(num))
                if(isPrime((int)Math.sqrt(num)))
                    System.out.println("YES");
                else
                    System.out.println("NO");
            else
                System.out.println("NO");
        }
        
    }
    
}
