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
import java.io.*;
public class lazerTst {
    
    public static void main(String[] args) {
        
        
        Scanner input=new Scanner(System.in);
        
        int t=input.nextInt();
        for(int i=0;i<t;i++)
        {
        
        int n=input.nextInt();
        
        Writer writer = new PrintWriter(System.out);

        int m=input.nextInt();
        int k=input.nextInt();
        int q=input.nextInt();
        
        
        int l[]=new int[q];
        int r[]=new int[q];
        
        for(int j=0;j<q;j++)
        {
             l[j]=input.nextInt();
             r[j]=input.nextInt();
        }
        
        int store[]=new int[q],count=0;
        
//        if(n==20000 && m<=10)
//        {
            m=(m+1)/2;
            
            for(int w=0;w<q;w++)
            {
                if(w<k)
                {    
                    System.out.println("1 "+l[count]+" "+r[count]+" "+m);
                
                     System.out.flush();
                     
                    int h=input.nextInt();
                        store[count]=h;
                        count++;
                }
                else
                {
                    for(int p=-1;p<w;p++)
                    {
                        if(p==-1)
                            System.out.print("2");
                        else
                            System.out.print(" "+store[p]);
                    }
                    System.out.println("");
                    System.out.flush();
                    int h=input.nextInt();
                        store[count]=h;
                        count++;
                }
            }
            
//        }
        
        
        }
    }
    
}
