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
public class TrainOrWalk {
    public static void main(String[] args) {
        
        
        
        Scanner input=new Scanner(System.in);
        
        int T;
        
        T=input.nextInt();
        for(int i=0;i<T;i++)
        {
            int N,A,B,C,D,P,Q,Y,G,H,I,tWalk,tTrain,E;
            if(input.hasNext()==true)
            {
                N=input.nextInt();
            A=input.nextInt();
            B=input.nextInt();
            C=input.nextInt();
            D=input.nextInt();
            P=input.nextInt();
            Q=input.nextInt();
            Y=input.nextInt();
            
            for(int j=1;j<=N;j++)
            {
                E=input.nextInt();
            }
            
            G=(C-A)*P;
            if(G<0)
            {
                G=-G;
            }
            
            H=(D-C)*Q;
            if(H<0)
            {
                H=-H;
            }
            
            I=(D-B)*P;
            if(I<0)
            {
                I=-I;
            }
            
            
            tWalk=(B-A)*P;
            if(tWalk<0)
            {
                tWalk=-tWalk;
            }
            
            if(G<Y)
            {
                tTrain=Y +H+I;
                  if(tWalk>tTrain)
            {
                System.out.println(tTrain);
            }
            }
             
               else 
               {
                   System.out.println(tWalk);
               }  
        }
        }
  }   
}