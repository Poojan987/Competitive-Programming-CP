/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codechefMarch;

/**
 *
 * @author poojan
 */

import java.util.Scanner;
import java.util.Arrays; 
public class isItRatingAU {
    
    static String func()
    {
        
        
          Scanner input=new Scanner(System.in);
          
          
          int n=input.nextInt();
        int a[]=new int[n];
        int b[]=new int[n];
        
        
        String ans="rated";
        
        System.out.flush();
        for(int i=0;i<n;i++)
        {
            a[i]=input.nextInt();
            
            b[i]=input.nextInt();
            
             
            
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                return ans;
                
            }
             
        
        }
        
        
        for(int i=0;i<n-1;i++)
        {
            
            if(a[i]<a[i+1])
            {
                ans="unrated";
                
                break;
            }
            else if(i==n-2) 
            {
                ans="maybe";
                
                break;
            }
            
        
        
    
    }
    return ans;
    
    }
    
    public static void main(String[] args) {
        
      Scanner input=new Scanner(System.in);
      
      
        
       
        
        
        
        System.out.println(func());
        
        
      
        
        
      
               
           
        }
        
        
        
    }
    

