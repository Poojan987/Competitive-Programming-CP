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
public class ThirdHighest {
    public static void main(String[] args) {
        int num[]={5,6,11,7,5,8,8,9,10,0,0,0,9,5,8,9,9,10,2,11,7},max=0,secHighest=0,thirdHighest=0;
        
        for(int i=0;i<21;i++)
        {
            if(num[i]>max)
            {
                thirdHighest=secHighest;
                secHighest=max;
                max=num[i];
                
            }
            
            else if(num[i]>secHighest && num[i]<max && num[i]>thirdHighest)
            {
                thirdHighest=secHighest;
                secHighest=num[i];
            }
            
            else if(num[i]>thirdHighest &&  num[i]<secHighest && num[i]<max)
            {
                thirdHighest=num[i];
            }
        }
        System.out.println(""+max);
        System.out.println(""+secHighest);
        System.out.println(""+thirdHighest);
    }
    
}
