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
public class SecondHighest {
    public static void main(String[] args) {
        int num[]={5,6,7,5,8,8,9,10,9,5,8,9,9,10,2,7},max=num[0],secHighest=num[0];
        
        
        
        
        for(int i=0;i<16;i++)
        {
            if(num[i]>max)
            {
                secHighest=max;
                max=num[i];
            }
            else if(num[i]>secHighest && num[i]<max)
            {
                secHighest=num[i];
            }
            
            
            
        }
        System.out.println(max);
        System.out.println(secHighest);
    }
    
}
