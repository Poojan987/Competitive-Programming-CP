/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practice_codechef;
import java.util.Scanner;
import java.util.Arrays;
import java.lang.*;
/**
 *
 * @author poojan
 */
public class bobAndHisFriends {
    
    
    public static void main(String[] args) {
        int t;
        
        
        Scanner input=new Scanner(System.in);
        
        t=input.nextInt();
        
        for(int i=0;i<t;i++)
        {
            int n;
            long a,b,c,time=0,max,min;
            
            
            n=input.nextInt();
            
            
            a=input.nextLong();
            b=input.nextLong();
            c=input.nextLong();
            
            
            
            
            long floor[]=new long[n];
            
            
            for(int j=0;j<n;j++)
            {
                floor[j]=input.nextLong();
            }
            
            
            Arrays.sort(floor,0,n-1);
            min=floor[0];
            max=floor[n-1];
            
            
            
            
            
            if(a<min && b<min)
            {
                
                time=Math.abs((2*min)-b-a)+c;
            }
            else if(a>max && b>max)
            {
                time=Math.abs((2*max)-b-a)+c;
            }
            else 
            {
                time=Math.abs(b-a)+c;
            }
            
            System.out.println(time);
        }
    }
}
