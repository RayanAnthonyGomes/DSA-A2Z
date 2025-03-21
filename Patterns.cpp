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
    pattern18(n);

}