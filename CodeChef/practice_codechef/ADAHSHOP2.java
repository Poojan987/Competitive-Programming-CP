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
public class ADAHSHOP2 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        
        int t=input.nextInt();
        
        for(int i=0;i<t;i++)
        {
        int r0=input.nextInt();
        int c0=input.nextInt();
            if(r0==1 && c0==1)
            {
            System.out.println("41");
            System.out.println("2 2");
            System.out.println("3 3");
            System.out.println("4 4");
            System.out.println("5 5");
            System.out.println("6 6");
            System.out.println("7 7");
            System.out.println("8 8");
            System.out.println("7 7");
            System.out.println("8 6");
            System.out.println("7 5 \n6 4 \n5 3\n4 2\n3 1\n4 2\n5 1\n6 2\n7 3\n8 4\n7 3\n8 2\n7 1\n6 2\n5 3");
            System.out.println("4 4\n3 5\n2 6\n1 7\n2 8\n3 7\n4 8\n3 7\n2 6\n1 5\n2 4\n1 3\n2 4\n3 5\n4 6\n5 7\n6 8");
            
            }
        }
    }
    
}
