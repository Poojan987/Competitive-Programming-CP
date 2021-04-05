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
public class chefInFentasyLunchTime {
    public static void main(String[] args) {
        
        
        Scanner input=new Scanner(System.in);
        
        
        int t=input.nextInt();
        
        
        for(int i=0;i<t;i++)
        {
            int n=input.nextInt();
            int s=input.nextInt();
            String st="no";
            
            
            int arr1[]=new int[n];
            int arr2[]=new int[n];
            
            int max=0;
            
            for(int j=0;j<n;j++)
            {
                arr1[j]=input.nextInt();
                if(max<arr1[j])
                    max=arr1[j];
            }
            
            int min1=max;
            int min2=max;
            int count1=0,count2=0;
            for(int j=0;j<n;j++)
            {
                arr2[j]=input.nextInt();
                
                if(arr2[j]==0)
                {
                    count1++;
                    if(min1>arr1[j])
                    {
                        min1=arr1[j];
                    }
                }
                else if(arr2[j]==1){
                count2++;
                 if(min2>arr1[j])
                 {
                        min2=arr1[j];
                 }
                
                }
                
            }
            
            
            
            
        
        if(min1+min2+s<=100)
                st="yes";
        
        
        if(count1<1 || count2<1)
            st="no";
            
            
            System.out.println(st);
        }
    }
    
}
