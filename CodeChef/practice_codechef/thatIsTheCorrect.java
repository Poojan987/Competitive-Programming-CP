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
public class thatIsTheCorrect {
    public static void main(String[] args) {
        	int t,n,score=0,i,j,q,p;
	Scanner input=new Scanner(System.in);
	
        
        t=input.nextInt();
	
	for(i=0;i<t;i++)
	{
                n=input.nextInt();
		
		int arr[]={0,0,0,0,0,0,0,0,0,0,0,0};
		int max=0;
		for(j=0;j<n;j++)
		{
                    
                        q=input.nextInt();
                        score=input.nextInt();
			
			
			if(arr[q]<=score)
			{
			
			arr[q]=score;
			}
			
		}
		for(p=1;p<9;p++)
		{
			max=max+arr[p];
		}
		          System.out.println(max);
	}
    }
    
}
