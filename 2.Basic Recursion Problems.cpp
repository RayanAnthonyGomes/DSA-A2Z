#include<bits/stdc++.h>
using namespace std;

//Print Name N times
void f(int i,int n){
    if(i>n) return;
    cout << "rayan\n";
    f(i+1,n);
}


int main(){
    int n;
    cin >> n;
    f(1,n);
}