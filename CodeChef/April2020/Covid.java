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
public class Covid {
    public static void main(String[] args) {
        
    
    Scanner input=new Scanner (System.in);
    
    int t=input.nextInt();
    for(int i=0;i<t;i++)
    {
        int n=input.nextInt();
        
        int arr[]=new int[n];
        int index[]=new int[n];
        int count=0;
        
        String str="NO";
        
        for(int j=0;j<n;j++)
        {
            arr[j]=input.nextInt();
            if(arr[j]==1)
            {
                index[count]=j;
                
                count++;
            }
        }
        if(count==1)
            str="YES";
        
        for(int k=1;k<count;k++)
        {
            
            
            
            if(index[k]-index[k-1]>=6)
                str="YES";
            else
            {
                str="NO";
                break;
            }    
        }
        System.out.println(str);
    }
}
}