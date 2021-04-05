/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package April;

/**
 *
 * @author poojan
 */
import java.util.Scanner;
import java.util.ArrayList;
public class UNITGCD2 {
    
    static int gcd(int a,int b)
    {
        if(b>a)
            return gcd(b,a);
        if(b==0)
            return a;
        else 
            return gcd(b,a%b);
    }
    
    static ArrayList prime(int n,ArrayList list) 
    { 
        // Create a boolean array "prime[0..n]" and initialize 
        // all entries it as true. A value in prime[i] will 
        // finally be false if i is Not a prime, else true. 
        boolean prime[] = new boolean[n+1]; 
        for(int i=0;i<n;i++) 
            prime[i] = true; 
          
        for(int p = 2; p*p <=n; p++) 
        { 
            // If prime[p] is not changed, then it is a prime 
            if(prime[p] == true) 
            { 
                // Update all multiples of p 
                for(int i = p*p; i <= n; i += p) 
                    prime[i] = false; 
            } 
        } 
          
        // Print all prime numbers 
        for(int i = 2; i <= n; i++) 
        { 
            if(prime[i] == true) 
            {
                System.out.print(i + " "); 
                list.remove(Integer.valueOf(i));
            } 
        }
        return list;
    } 
    
    
    static ArrayList print(ArrayList list)
    {
        
        int arr[]=new int[list.size()];
        
         ArrayList<Integer>list2=new <Integer>ArrayList();
        
        int count=0;
        if(list.size()!=0)
        {
                for(int i=1;i<list.size();i++)
                {
                    if(gcd((int)list.get(0),(int)list.get(i))==1)
                   arr[count]= gcd((int)list.get(0),(int)list.get(i));
                }
        
                for(int i=0;i<list.size();i++)
                {
                    for(int j=0;j<list.size();j++)
                    {
                        if(list.get(i)==list.get(j))
                            continue;
                        else if(gcd((int)list.get(i),(int)list.get(j))!=1)
                        {
                            list2.add((int)list.get(j));
                            list.remove(j);
                            
                        }
                    }
                
                }
                System.out.printf("%d ",list.size());
                for(int i=0;i<list.size();i++)
                    System.out.printf("%d ",list.get(i));
               
                System.out.println("");
                return print(list2);
        }
        else 
            return list2;
                
    }
    
    
    public static void main(String[] args) {
        
        
        Scanner input=new Scanner(System.in);
        
        int t=input.nextInt();
        
        for(int i=0;i<t;i++)
        {
            ArrayList<Integer>numbers=new <Integer>ArrayList();
            
            int n=input.nextInt();
            
            
            for(int j=1;j<=n;j++)
            {
                numbers.add(j);
            }
            numbers.remove(Integer.valueOf(1));
            
            prime(n,numbers);
            
            System.out.println("");
            System.out.println("");
            
            print(numbers);
            
            
            
            
//        prime(n);
        
        }
        
    }
    
    
    
    
}
