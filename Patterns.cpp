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

}


int main(){
    int n;
    cin >> n;
    pattern1(n);

}