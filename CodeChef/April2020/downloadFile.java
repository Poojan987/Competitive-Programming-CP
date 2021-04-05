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
public class downloadFile {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        
        int tc=input.nextInt();
        
        for(int i=0;i<tc;i++)
        {
            int n=input.nextInt();
            int k=input.nextInt();
            int sum=0;
            
            int sumt=0,sumd=0;
            int count=0;
            for(int j=0;j<n;j++)
            {
                int t=input.nextInt();
                int d=input.nextInt();
                
                sumt=sumt+t;
                sumd=sumd+d;
                
                if(sumt<k)
                    continue;
                else if(sumt==k)
                    count++;
                
             else    if(t+sumt>k && count==0)
                {
                    sum=sum+((sumt-k)*d);
                    count++;
                    
                }
                 
                 else 
             {
                 sum=sum+(t*d);
             }
            
            
            }
            System.out.println(sum);
        
        
        }
    }
    
}
