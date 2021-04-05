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
public class SmartPhone {
    public static void main(String[] args) {
        Scanner input =new Scanner(System.in);
        
        int N=input.nextInt(),max=0,fix;
        int budget[]=new int[N];
        int p[]=new int[N];
        
        for(int i=0;i<N;i++)
        {
             if(input.hasNext()==true)
             {
                 budget[i]=input.nextInt();
             }
        }
        for(int i=0;i<N;i++)
        {
            
            fix=budget[i];
            int revenue=0;
            for(int j=0;j<N;j++)
            {
                if(budget[j]>=fix)
                {
                    revenue=revenue+fix;
                }
                
            }
            p[i]=revenue;
            
                
                if(max<p[i])
                {
                    max=p[i];
                }
                
        }
        
        System.out.println(max);
        
        
    }
    
}
