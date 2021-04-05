/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practice_codechef;
import java.util.Scanner;
import java.util.Random;



/**
 *
 * @author poojan
 */
public class Dynamo {
    public static void main(String[] args) {
        
        Scanner input =new Scanner(System.in);
        Random rand=new Random();
        
        int T=input.nextInt();
        
        for(int i=0;i<T;i++)
        {
            int n;
            long a,s,b,c,d,e,p,out;
            
            n=input.nextInt();
            
            if(n>=1 && n<=5)
            {
                a=input.nextLong();
                
                s=(long) ((Math.random()*((Math.pow(10, n)*5)-a))+a+1); 
                System.out.println(s);
                
                System.out.print("\033[H\033[2J");  
    System.out.flush();  
                
                
                b=input.nextLong();
                
                
                
                
                
                
                    if(a<b)
                    {
                        p=a;
                    }
                
                    else
                    {
                        p=b;
                    }
                    
                    c=(long)((Math.random()*(p-1))+1); 
                    //-1 coz the c != p as in the range of the random number the maximum is neglected.
                    
                    while((a+b+c)>s)
                    {
                        c=(long)((Math.random()*(p-1))+1); 
                    }
                    
                    System.out.println(c);
                    
                    System.out.print("\033[H\033[2J");  
    System.out.flush();  
                    
                    //d
                    d=input.nextLong();
                    
                    
                    
                    
                        e=s-(a+b+c+d);
                        System.out.println(e);
                        
                        
                        System.out.print("\033[H\033[2J");  
                        System.out.flush();  
                    
                out=input.nextInt();
                
                if(out==-1)
                {
                
                    break;
                }
                
            
        }
            //for clearing the output screen
     
}  
            
    }
        
    
    
}
