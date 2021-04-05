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

public class matrixDecompositionCookOff {
    
    
    
   static long j;
    
   static long k=-1;
    
    
    
    
    static long re(long a,long n)
    {
        
        
        n--;
//        j++;
//        System.out.println(j);
        k=k+2;
        
        
        if(n==-1)
            return 0;
        
    return ((( long)((Math.pow(a,k))%1000000007)+re(((a*((long)Math.pow(a,k))%1000000007)%1000000007),n))%1000000007);
    
    }
    
    
    
    public static void main(String[] args) {
        
        Scanner input=new Scanner (System.in);
        
       
        
//        System.out.println(x);
//        
//        
//        System.out.println((long)(Math.pow(2,100000 ))%1000000007);
        
        int t=input.nextInt();
        
        
        
        
        
        
        
        
        
        for(int i=0;i<t;i++)
        {
            
            long n=input.nextLong();
            long a=input.nextLong();
            long np=1;
            long sum=0;
            
            long mod=1000000007;
            
            long ap=0;
                for(int p=0;p<n;p++,np+=2)
                {
                    ap=((long)(Math.pow(a,np ))%1000000007);
                    
                    sum=((sum+ap)%1000000007);
                    
                    
                    
                    a=(a*((long)(Math.pow(a,np ))%1000000007))%1000000007;
                    
                }

            System.out.println(sum);
        
        }
        
        
        
//        for(int i=0;i<t;i++)
//        {
//            
//            long n=input.nextLong();
//            long a=input.nextLong();
//            
//                System.out.println((re(a,n))%1000000007);
////            else
////                ro(a,n);
//
//            
//        
//        }
        
    }
    
}
