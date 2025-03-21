#include<iostream>
using namespace std;
/*  Pattern 1
Example 1:
Input: N = 3
Output: 
* * *
* * *
* * *
Example 2:
Input: N = 6
Output:
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
*/
void pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    
}

/*  Pattern 2
Input Format: N = 3
Result: 
* 
* * 
* * *

Input Format: N = 6
Result:
* 
* * 
* * *
* * * *
* * * * *
* * * * * *
*/

void pattern2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    
}

/*  Pattern 3
Input Format: N = 3
Result: 
1
1 2 
1 2 3

Input Format: N = 6
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
*/
void pattern3(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " " ;
        }
        cout << "\n";
    }
}
    
/*  Pattern 4
Input Format: N = 3
Result: 
1
2 2 
3 3 3

Input Format: N = 6
Result:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
*/

void pattern4(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
    
}

/*  Pattern 5
Input Format: N = 3
Result: 
* * *
* * 
*

Input Format: N = 6
Result:
* * * * * *
* * * * * 
* * * * 
* * * 
* * 
* 

*/

void pattern5(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        
        {
            cout << "*";
        }
        cout << "\n";
    }
    
}

/*  Pattern 6
Input Format: N = 3
Result: 
1 2 3
1 2
1

Input Format: N = 6
Result:
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
*/
void pattern6(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n + 2 - i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    
}

/* Pattern 7
Input Format: N = 3
Result: 
  *  
 *** 
*****   
Input Format: N = 6
Result:
     *     
    ***    
   *****   
  *******  
 ********* 
***********
As we can clearly observe that for each row there are some spaces that get printed then some stars and then again some spaces giving it a final pyramidal look. For eg: In the first row (i=0) there are 4 spaces, 1 star, then again 4 spaces. In the second row (i=1) there are 3 spaces, 3 stars, then again 3 spaces so we can say that there are N-i-1 spaces, 2*i+1 stars, and then again N-i-1 spaces for each row where i is the row index. We thus simply run 3 inner loops first for printing the spaces, then the stars, and then the spaces again.
*/

void pattern7(int n){
    for (int i = 0; i < n; i++)
    {
        //spaces
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        //stars
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*";

        }
        //spaces
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout << "\n";
        
    }
    
}

/*  Pattern 8
    Input Format: N = 3
Result: 
*****  
 ***
  *   
  3 er belay: spaces: 0 ta; for line 0
                      0,5,0 line er equal spaces. 0 te 0 spaces 1 e 1 spaces. stars kmne hoitese? stars: n+2
                      1,3,1
                      2,1,2
Input Format: N = 6
Result:     
***********
 *********
  *******
   ***** 
    ***    
     *
*/
void pattern8(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2*n)-(2*i+1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout <<  " ";
        }
        cout << "\n";
        
    }
    
}

/*  Pattern 9
Input Format: N = 3
Result: 
  *  
 ***
***** 
*****  
 ***
  *   
Input Format: N = 6
Result:   
     *
    ***
   ***** 
  *******
 *********
***********  
***********
 *********
  *******
   ***** 
    ***    
     *
*/
void pattern9(int n){
    //basically the combination of 2 patterns of 7 and 8 
    pattern7(n);
    pattern8(n);
    //uncomment this if we dont cheat.
    // for (int i = 0; i < n; i++)
    // {
    //     //spaces
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     //stars
    //     for (int j = 0; j < 2*i+1; j++)
    //     {
    //         cout << "*";

    //     }
    //     //spaces
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "\n";
        
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < (2*n)-(2*i+1); j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout <<  " ";
    //     }
    //     cout << "\n";
        
    // }
}

/*  Pattern 10
    Input Format: N = 3
Result: 
  *  
  **
  ***  
  **
  *   
Input Format: N = 6
Result:   
     *
     **
     *** 
     ****
     *****
     ******  --> symmetrical position
     *****
     ****
     ***    
     **
     *
*/

void pattern10(int n){
    for (int i = 1; i <= 2*n-1; i++)        
    {
        int stars = i;
        if(i>n) {
            stars = 2*n-i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

/*  Pattern 11
    Input Format: N = 3
Result: 
1
01
101

Input Format: N = 6
Result:   
1
01
101
0101
10101
010101
*/

void pattern11(int n){
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            start = 1;

        }else{
            start = 0;
        }

        for (int j = 0; j <= i; j++)        
        {   
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
    
}

/*  Pattern 12
    Input Format: N = 3
Result: 
1    1
12  21
123321

Input Format: N = 6
Result:   
1          1
12        21
12       321
1234    4321
12345  54321
123456654321
*/

void pattern12(int n){
    int space = 2*(n-1);
    
    for (int i = 1; i <= n;i++)
    {   
        //num incre
        for (int j = 1; j <=i; j++)
        {
            cout << j;

        }
        //spaces 
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        //num decre
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -=2;
        }
    }

/*  Pattern 13
 Input Format: N = 3
Result: 
1
2 3
4 5 6

Input Format: N = 6
Result:   
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
16  17  18  19  20  21
*/

void pattern13(int n){
    int star = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << star;
            star += 1;
        }
        cout << endl;
    }
    
}

/*  Pattern 14
    Input Format: N = 3
Result: 
A
A B
A B C

Input Format: N = 6
Result:   
A
A B
A B C
A B C D
A B C D E
A B C D E F
*/
void pattern14(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A'+i; ch++)
        {
            cout << ch << " " ;
        }
        cout << "\n";
    }
}   

/*  Pattern 15
Input Format: N = 3
Result: 
A B C
A B
A

Input Format: N = 6
Result:   
A B C D E F
A B C D E 
A B C D
A B C
A B
A
*/
void pattern15(int n){
    for (int i = 01; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' +(n-i+1); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
    
}

/*  Pattern 16
Input Format: N = 3
Result: 
A
B B
C C C

Input Format: N = 6
Result:   
A 
B B
C C C
D D D D
E E E E E
F F F F F F
*/

void pattern16(int n){

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        
        for (int j = 0; j<=i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
    
}

/*  Pattern 17
Input Format: N = 3
Result: 
  A  
 ABA 
ABCBA


Input Format: N = 6
Result:   
     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA 
ABCDEFEDCBA
*/
void pattern17(int n){
    //outer loops --> n times chole
    //spaces n-i-1
    //Number of chars ==> break point is at 5/2 + 1
    for (int i = 0; i < n; i++)
    {
    char ch = 'A';
    int breakpoint = (2*i+1)/2;
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for (int j = 01; j <= 2*i + 1; j++)
    {
        cout << ch;
        if (j<=breakpoint)  
        {
            ch++;
        }else{
            ch--;
        }
            
    }
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout << endl;
        
    }
    
}

/*  Pattern 18
Input Format: N = 3
Result: 
C
B C
A B C

Input Format: N = 6
Result:   
F
E F
D E F
C D E F
B C D E F
A B C D E F
*/

void pattern18(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E'-i; ch <= 'E'; ch++)
        {
            cout << ch;

        }
        cout << endl;
    }
    
}

/*  Pattern 19
Input Format: N = 3
Result: 
******
**  **
*    *
*    *
**  **
******

Input Format: N = 6
Result:   
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************
There are 4 general rules for solving a pattern-based question : 

We always use nested loops for printing the patterns. For the outer loop, we count the number of lines/rows and loop for them.
Next, for the inner loop, we focus on the number of columns and somehow connect them to the rows by forming a logic such that for each row we get the required number of columns to be printed.
We print the numbers inside the inner loop.
Observe symmetry in the pattern or check if a pattern is a combination of two or more similar patterns.
Contrary to the previous patterns, this pattern observes symmetry. We can clearly see that the first half of the pattern is just a mirror image of the second half of the pattern. If we observe the first part, we see that like some previous patterns, it can also be divided into 3 parts i.e. stars, spaces, and then stars. In the first row, there are no spaces and 10 stars, in the second row, there are 2 spaces and 8 stars, and so on. So, we initialize the spaces with 0 initially which will eventually increment by 2 whenever we enter a new row. The stars, however, will be twice the row number, half of the stars would be printed before the spaces and half after the spaces.

Similar will be the case of the second half of the pattern too. The initial number of spaces would be equal to 2*(N-1) and 1 star each would be printed on either side of the spaces initially. The spaces will decrease by 2 and the stars will increase by 2 in each row.

*/

void pattern19(int n){
    //stars //spaces // stars
    //has 2 parts
    //first part
    int initialSpace = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 01; j <= n-i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < initialSpace; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        initialSpace += 2;
        cout << endl;
    }
    //second
    
    initialSpace = 2*n -2;
      for(int i=1;i<=n;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<initialSpace;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          // The spaces decrease by 2 every time we hit a new row.
          initialSpace-=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
    
    
    
}
/*  Pattern 20
Input Format: N = 3
Result: 
*    *
**  **
******
**  **
*    *


Input Format: N = 6
Result:   
*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *

In this problem, we have to print a butterfly-like star pattern. This pattern is very similar to Pattern 10 in this series as here we can see that for Row 1 we have 2 stars, and 8 spaces, and for Row 2 we have 4 stars and 6 spaces, and so on. Also, after the nth row, the stars decrease and the spaces increase. So, the outer loop will run for 2*n -1 times ( n times when spaces > stars and then n-1 when stars > spaces ). There will be 3 inner loops, one to print stars, then spaces, and then again stars. Spaces will decrement by 2 as i increases and when i reaches n, then spaces decrement by 2 every time we enter a new row. When i<n, the stars printed in each row are 2*i, and as soon as i>n, the stars in each row would be twice of 2*n-i.
*/
void pattern20(int n){
    int spaces = 2*n-2;
    for(int i = 1;i<=2*n-1;i++){
          
        // stars for first half
        int stars = i;
        
        // stars for the second half.
        if(i>n) stars = 2*n - i;
        
        //for printing the stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        
        //for printing the spaces
        for(int j = 1;j<=spaces;j++){
            cout<<" ";
        }
        
        //for printing the stars
        for(int j = 1;j<=stars;j++){
            cout<<"*";
        }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout<<endl;
        if(i<n) spaces -=2;
        else spaces +=2;
    }
    
}

/*  Pattern 21
Input Format: N = 3
Result: 
***
* *
***

Input Format: N = 6
Result:   
******
*    *
*    *
*    *
*    *
******
This problem is a very simple one where we just have to print a hollow rectangle. So, after observation, we see that the stars are only printed at the border of the rectangle, and on the rest of the positions, spaces are printed. Hence, the outer loop and inner loop both will loop for n times and in the inner loop we add a condition that if the row index or column index is equal to 0 or n-1, then stars should get printed otherwise spaces should be printed.
*/
void pattern21(int n)
{
     // outer loop for no. of rows.
     for(int i=0;i<n;i++){
         
         // inner loop for printing the stars at borders only.
         for(int j=0;j<n;j++){
             
             if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
                
             // if not border index, print space.
             else cout<<" ";
         }
         
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
     }
      
}













int main(){
    /*For coding judges online:
    We take test cases
    int t; //number of test cases
    cin >> t;
    for(int i = 0; i < t; i++){
    int n;
    cin >> n;
    pattern1(n);
    }
    
    */
    int n;
    cin >> n;
    pattern21(n);

}