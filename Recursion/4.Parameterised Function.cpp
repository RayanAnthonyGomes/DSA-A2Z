#include<bits/stdc++.h>
using namespace std;

//summation from 1 to n
void f(int i, int sum){
    if(i<1){
        cout << sum;
        return;
    }else{
        f(i-1,sum+i);
    }

}

//FUnctional 
// int f1(int n){
//     if(n==0) return 0;
//     return n + f(n-1);
// }

//Factorial of N
int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

//reverse an array
//Using two pointers 
void rev(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    rev(i+1,arr, n);
}

bool f(int i,string &s){
    if (i >= s.size()/2) return true;
    if(s[i] != s[s.size()-1-i]) return false;
    return f(i+1, s); 
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rev(0, arr, n);
    for (int i = 0; i < n; i++)
    {
            cout << arr[i] << " ";
    }

    //check string palindrome
    string s =  "madam";
    cout << f(0,s);
}
