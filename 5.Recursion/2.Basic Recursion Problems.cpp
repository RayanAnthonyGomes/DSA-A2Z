#include<bits/stdc++.h>
using namespace std;

//Print Name N times
void f(int i,int n){
    if(i>n) return;
    cout << "rayan\n";
    f(i+1,n);
}

//Print Linearly from 1 to N
void f2(int i, int n){
    if(i > n) return;
    cout << i << " ";
    f2(1+i,n);
}

//Print from N to 1
void f3(int i, int n){
    if(i<1) return;
    cout << i << " ";
    f3(i-1,n);
    //has to be f(n,n) on main
}
int main(){
    int n;
    cin >> n;
    f3(n,n);
}