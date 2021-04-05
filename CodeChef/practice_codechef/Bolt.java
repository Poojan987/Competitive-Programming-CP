/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practice_codechef;
import java.util.Scanner;
import java.lang.Math;
/**
 * 
 * 
 * finish,distancetoBolt,tigerAccelaration,boltSpeed .
 *
 * @author poojan
 */
public class Bolt {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        
        int T=input.nextInt();
        
        for(int i=0;i<T;i++)
        {
            int finish=input.nextInt();
            int distanceBolt=input.nextInt();
            int a=input.nextInt();
            int v=input.nextInt();
            
            double timeT=Math.sqrt(2*(distanceBolt+finish)/a);
            
            double timeB=finish/v;
            
            
            
            if(timeT>timeB)
            {
                System.out.println("Bolt");
            }
            else if(timeT<timeB)
            {
                System.out.println("Tiger");
            }
            else if(timeT==timeB)
            {
                System.out.println("Tiger");
            }
        }
    }
    
}
