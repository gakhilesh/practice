package hackerRank.projecteuler;

import java.io.BufferedReader;
import java.io.InputStreamReader;

/**
 *  
 *  @version     1.0, 12-May-2015
 *  @author akhilesh
 */
public class euler046 {
   public static int maxLimit = 1000000;
   public static  int[] primes = new int[maxLimit];
    
    public static void calculatePrimes(){
        System.out.println("Inside calculate primes !");
        for(int i = 2; i< maxLimit; i++){
            primes[i] = 1;
        }
        for(int i = 2; i <= Math.sqrt(maxLimit); i++){
            if(primes[i] == 1){
                for(int j = 2;  i*j < maxLimit ; j++){
                  primes[i*j] = 0;
              }
            }
        }
    }
    public static void printPrimes(int start , int end){
        for(int i = start ; i< end; i++){
            if(primes[i] == 1){
                System.out.println(i + " is prime");
            }else{
                System.out.println(i + " is not prime");
            }
        }
    }
    public static int noOfWays(int n){
        int ans = 0;
        for(int i = 1; i < n ; i++ ){
             if(primes[i] == 1){
                 for(int j = 1; j < Math.sqrt(n); j++){
                     if(n == (i + (2 * j * j))){
                         //System.out.println(n + " = " + i +  " + 2 * " + j + "*" + j);
                     ans++;    
                     }
                 }   
             }
        }
        return ans;
    }
    public static void main(String args[]){
        int T,ans,N;
        String line;
        calculatePrimes();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try{
            line =  br.readLine();
            T = Integer.parseInt(line);
            for(int i = 0; i < T; i++){
                line = br.readLine();
                N = Integer.parseInt(line);
                ans = noOfWays(N);
                System.out.println(ans);
            }
            
        }catch(Exception e){
            e.printStackTrace();
        }
        return ;
    }
    
}
/*
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler049
It was proposed by Christian Goldbach that every odd composite number can be written as the sum of a prime and twice a square.
9=7+2×12
15=7+2×22
21=3+2×32
25=7+2×32
27=19+2×22
33=31+2×12
It turns out that the conjecture was false as you'll discover some values can't be represented as a sum of prime and twice a square. 
You are given N, print the number of ways N can be represented as a sum of prime and twice a square. 
Example 15 can be represented in two ways as 15=7+2×22 and 15=13+2×12
Input Format 
The first line contains an integer T , i.e., number of test cases. 
Next T lines will contain an integer N.
Output Format 
Print the values corresponding to each test case.
Constraints 
1≤T≤100 
9≤N<5×105 
N∈{odd composite number}
Sample Input
2
9
15


Sample Output
1
2

*/
