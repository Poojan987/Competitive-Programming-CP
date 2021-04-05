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
public class COG2003Baba {
    public static void main(String[] args) {
        
        
        Scanner input =new Scanner(System.in);
        
        int t=input.nextInt();
        
        for(int i=0;i<t;i++)
        {
            int n=input.nextInt();
            int max=0;
            
            int arr[]=new int[n];
            for(int j=0;j<n;j++)
            {
                arr[i]=input.nextInt();
                
                if(max<arr[i])
                {
                    max=arr[i];
                }
            }
            
            System.out.println(max);
        }
    }
    
}
