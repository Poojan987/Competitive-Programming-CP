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
import java.math.RoundingMode;

public class UNITGCD {
    
    static int gcd(int a, int b) 
    { 
        if (a == 0) 
            return b; 
        return gcd(b % a, a); 
    } 
  
    // Function to find gcd of array of 
    // numbers 
    static int findGCD(int arr[], int n) 
    { 
        int result = arr[0]; 
        for (int i = 1; i < n; i++){ 
            result = gcd(arr[i], result); 
  
            if(result == 1) 
            { 
               return 1; 
            } 
        }
         return result; 
    }
    
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        
        
        
        int t=input.nextInt();
        int a[]=new int[t];
        
        for(int i=0;i<t;i++)
        {
           a[i]=input.nextInt();
            
        
        }
        
        System.out.println(findGCD(a,t));
        
    }
    
}
