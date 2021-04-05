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
public class popGates {
    public static void main(String[] args) {
        
        Scanner input=new Scanner(System.in);
        int t=input.nextInt();
        
        for(int i=0;i<t;i++)
        {
            int n=input.nextInt();
            int k=input.nextInt();
            
            int sum=0;
            
            int count=n;
            String arr[]=new String [n];
            
            
            for(int j=0;j<n;j++)
            {
                arr[j]=input.next();
            }
            
            for(int z=0;z<k;z++)
            {
                if(arr[count-1].equals("T"))
                {
                    count--;
                }
                
                else if(arr[count-1].equals("H"))
                {
                    for(int q=0;q<count;q++)
                    {
                        if(arr[q].equals("T"))
                        {
                            arr[q]="H";
                            
                        }
                        else
                        {
                            arr[q]="T";
                        }
                        
                        
                    }
                    count--;
                }
            }
            
            for(int w=0;w<count+1;w++)
            {
                if(arr[w].equals("H"))
                    sum++;
            }
                
            System.out.println(sum);
        
        }
    }
    
}
