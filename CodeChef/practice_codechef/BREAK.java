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
public class BREAK {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        
        int t=input.nextInt();
        int s=input.nextInt();
        
        
        if(s==1)
        {
        for(int i=0;i<t;i++)
        {
            
            int n=input.nextInt(),helper=0,check=0,min=0,maxb=0,bool=0;
            
            String str="NO";
            int a[]=new int[n];
            int b[]=new int[n];
            
            for(int j=0;j<n;j++)
            {
                a[j]=input.nextInt();
                if(j==0)
                {
                    check=a[j];
                    min=a[j];
                }   
                else if(min>a[j])
                {
                    min=a[j];
                }
                    
                if(check==a[j])
                    helper++;
            
            }
            
            for(int j=0;j<n;j++)
            {
                b[j]=input.nextInt();
                
                if(maxb<b[j])
                {
                    maxb=b[j];
                }
                
                if(b[j]==check)
                    helper++;
            }
            
            
            
            
            
            
            
            if(helper==2*n )
            {
                System.out.println(str);
                
            }
            else
            {
                int var=0;
                int c[]=new int [n];
                for(int q=0;q<n;q++)
                {
                    for(int k=0;k<n;k++)
                    {
                        if(a[q]==b[k])
                        {
                            c[var]=a[q];
                            var++;
                            break;
                            
                        }
                    }
                   
                }
                
                
                
                if(var==0)
                {
                    System.out.println(str);
                }
                
                
                
                
                
                
                else 
                {
                    c[var]=min; 
                    var++;
                    
                    int var1=0;
                
                for(int w=0;w<n;w++)
                {
                    for(int e=0;e<var;e++)
                    {
                        if(a[w]==c[e] )
                        {
                            var1++;
                            break;
                            
                        }
                            
                        
                    }
                    if(var1==var)
                        break;
                }
                
                if(var1==var)
                {
                    System.out.println("YES");
                }
                
                else
                        System.out.println(str);
                    
                }
                
               
            
            }
            
            
            
            
            
            
        
        }
    }
    }
    
}
