//What is? --> when a function calls itself ultil a specific condition is met

#include<bits/stdc++.h>
using namespace std;
//Infinite recursion = Stack overflow = Out of memory =  No ending point
void infinite(){
    cout >> 1;
    infinite();
}

//To stop a recursion we need to have a base case to stop the process
void finite(){
    int cnt = 0;
    if(cnt == 4) return; //stops if 4 comes
    cout >> cnt;
    cnt++;
    finite();
} 
 
int main(){
    infinite();
    finite();

}