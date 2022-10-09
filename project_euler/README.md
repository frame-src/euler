
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of  or  below .

Input Format:
First line contains T that denotes the number of test cases. This is followed by T lines, each containing an integer, N.

Constraints
1<= T <= 100000;
1<= T <= 1000000000;
Output Format

For each test case, print an integer that denotes the sum of all the multiples of 3 or 5 below N.

Sample Input 0

2
10
100
Sample Output 0

23
2318
Explanation 0

For N = 10, if we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 and 9. The sum of these multiples is 23.

Similarly for N = 100, we get 2318.



Method of AVERAGE;

Sum of multiple of i, in N;

Step 1 = took first term multiple of i and last one;
         divide both by i to find the total number of multiples;
Step 2 = do the average;
         (first term + last term) / 3;
Step 3 = Total sum = total numbers * average;



Method 2 Arithmetic Progress series where An=a+(n-1)d;
example for 3:
3,6,9,12....99;
a = 3;
d = 3;
An = 99;

example for 5:
5,10,15,20...100;
a = 5;
d = 5;
An = 100;
Sn= n/2[2a+(n-1)d]

with 
-n       total number = n/i;
-a       first term;
-d       difference;

