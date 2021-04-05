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
public class PlusMultiply {
    public static void main(String[] args) {
       
    {
         byte T;
        short N;
        
        Scanner input=new Scanner(System.in);
        
        if(input.hasNext()==true){
        T=input.nextByte();
        
        
        
        if(T<=20 && T>=1  )
        {  
            for(int j=0;j<T;j++)
            {
                if(input.hasNext()==true)
                {
                    N=input.nextShort();
                if(N<=500 && N>=1 && N<=40000)
                {

                        int count=0;
                        
                        
                        int sequence[]=new int[N];
                        for(int k=0;k<N;k++)
                        {
                            if(input.hasNext()==true){
                            sequence[k]=input.nextInt();}
                        }
                        for(int a=0;a<N;a++)
                        {
                            if(a==N-1)
                            {
                                break;
                            }
                            for(int b=a+1;b<N;b++)
                            {
                                if(sequence[a]+sequence[b]==sequence[a]*sequence[b])
                                {
                                    count++;
                                }
                                
                            }
                         
                        }
                        System.out.println(count);
                    
                            
                }
            }
            }
        
        }    
        }
    
    }
    
    
}
        
    }
    
}
