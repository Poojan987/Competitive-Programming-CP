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
public class BreakingBricks {
    public static void main(String[] args) {
        
        Scanner input=new Scanner(System.in);
        
        int T=input.nextInt();
        
        for(int i=0;i<T;i++)
        {
            int count=0,p=0;
            double s=input.nextDouble();
            double w1=input.nextDouble();
            double w2=input.nextDouble();
            double w3=input.nextDouble();
            
            if(w1<=s || w2<=s || w3<=s){
            if((w1+w2+w3)<=s)
            {
                count=1;
            }
            else if((w1+w2)<=s )
            {
                count=2;
            }
            
            else if(w1<=s)
            {
                if((w2+w3)<=s)
                {
                    count=2;
                }
                else if(w2<=s)
                {
                    count=3;
                }
                
            }
            
                
                
             if((w3+w2)<=s )
            {
                p=2;
            }
            
            else if(w3<=s)
            {
                if((w2+w1)<=s)
                {
                    p=2;
                }
                else if(w2<=s)
                {
                    p=3;
                }
                
            }
                
                
if(count<p)
{
    System.out.println(count);
}
else
{
    System.out.println(p);
}

/////
            
        }
            
        
        
        }
        
    }
    
}
