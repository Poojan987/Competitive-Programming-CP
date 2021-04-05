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
import java.util.*;
public class anotherBirthdayPresentLT {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        
        
        
        int t=input.nextInt();
        
        for(int i=0;i<t;i++)
        {
        
            int n=input.nextInt();
            int k=input.nextInt();
            
            
            int arr1[]=new int[n];
            int arr2[]=new int[n];
            
            
            for(int j=0;j<n;j++)
            {
                arr1[j]=input.nextInt();
                arr2[j]=arr1[j];
            }
            
            
            Arrays.sort(arr2);
            
            int temp=0,count=0;
            
            
            
            for(int j=0;j<n;j++)
            {

               int qp= Arrays.binarySearch(arr2,arr1[j]);
               
               int f=qp;
               int b=qp;
               
               while(true)
               {
                   if(b<0||b>n-1||arr2[b]!=arr1[j])
                       break;
                   if( Math.abs(b-j)%k==0)
                   {
                       count++;
                       break;
                   }
                   b-=1;
               
               
               }
//                System.out.println(b);
                if(temp==count){
                    
               while(true)
               {
                   if(f>n-1||f<0||arr2[f]!=arr1[j])
                       break;
                   if( Math.abs(f-j)%k==0)
                   {
                       count++;
                       break;
                   }
                   f+=1;
               
               
               }
                }
                    if(temp==count)
                        break;
                temp=count;
                
            }
            
//            System.out.println(count);
        if(count==n)
                System.out.println("yes");
        else
                System.out.println("no");
        }
        
        
    }
    
}
