/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practice_codechef;

import java.util.Scanner;

/**
 *
 * @author poojan
 */
public class engXor2 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        
        
        
        
        int t=input.nextInt(),temp=0;
        for(int i=0;i<t;i++)
        {
            int n=input.nextInt();
            int q=input.nextInt();
            
            int arr[]=new int[n];
            
            
            for(int j=0;j<n;j++)
            {
                arr[j]=input.nextInt();
            }
            
            int p[]=new int [q];
            for(int j=0;j<q;j++)
            {
                 p[j]=input.nextInt();
               
            }
            
             int store1[]=new int[n];
             int store2[]=new int[n];
             int store3[]=new int[n];
             
                int c[]=new int[n];
                
                int even=0,odd=0;
                
                for(int z=0;z<n;z++)
                {
                    store[z]=p[]^arr[z];
                    
                }
                
                for(int z=0;z<n;z++)
                {
                    int count=0;
                    
                    temp=store[z];
                    int a;
                    
                    
                    for(;temp>0;)
                    {
                        a=temp%2;
                        if(a==1)
                            count++;
                        temp=temp/2;
                    }
                    
                    c[z]=count;
                    
                    
                    
                }
                 for(int o=0;o<n;o++)
                    {
                        if(c[o]%2==0)
                            even++;
                        else
                            odd++;
                    }
                 System.out.println(even);
        System.out.println(odd);
        }
        
    }
    
}
