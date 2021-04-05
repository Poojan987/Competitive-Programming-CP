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
public class Practice_CodeChef {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
        
         Scanner input=new Scanner(System.in);
         
         
         int t=input.nextInt();
         
        for(int my=0;my<t;my++)
        {
            int n=input.nextInt();
            String ask=input.next();
        char[] arr = ask.toCharArray();
        int swap = 0;
        int i = 0;
        int j = arr.length-1;
        char temp;
        while(i<j){
            if(arr[i] != arr[j]){
                if(arr[i+1] == arr[j]){
                    //swap i and i+1 and increment i, decrement j, swap++
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;

                    i++;j--;
                    swap++;
                } else if(arr[i] == arr[j-1]){
                    //swap j and j-1 and increment i, decrement j, swap++
                    temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;

                    i++;j--;
                    swap++;
                } else if(arr[i+1] == arr[j-1] && i+1 != j-1){
                    //swap i and i+1, swap j and j-1 and increment i, decrement j, swap+2
                    temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;

                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;

                    i++;j--;
                    swap = swap+2;
                }else{
                    swap = -1;break;
                }       
            } else{
                //increment i, decrement j
                i++;j--;
            }
        }       
        if(swap !=-1)
        {
        System.out.println("YES");
        System.out.println(swap);
        }
        
        else
        {
            System.out.println("NO");
        
        }
        // TODO code application logic here
    }}
    
}
