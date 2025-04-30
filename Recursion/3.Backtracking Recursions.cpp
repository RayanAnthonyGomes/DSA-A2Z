#include<bits/stdc++.h>
using namespace std;

//Backtracking means 

//Print for (1 to N) with bt we cant use F(i+1, n)
void f(int i, int n){
    if(i<1) return;
    f(i-1,n);
    cout << i << " ";
}

// Print numbers from N to 1 without using (1 - i) or reverse logic
void f2(int n) {
    if (n < 1) return;
    cout << n << " ";
    f2(n - 1);
}

int main(){
int n;
cin >> n;
f2(n);
}