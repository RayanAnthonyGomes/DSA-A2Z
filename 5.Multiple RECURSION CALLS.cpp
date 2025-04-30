#include<bits/stdc++.h>
using namespace std;
//fibonacci series: 0,1,1,2,3,5,8,13..... sequence

//Nth fibonacci = f(n-1) + f(n-2)

int fibo(int n){
    if(n<=1) return n;
    int last = fibo(n-1), secondlast = fibo(n-2);
    return last + secondlast;

}

int main(){
    int n;
    cin >>n;
    cout << fibo(n);
}