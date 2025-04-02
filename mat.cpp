#include<bits/stdc++.h>
using namespace std;

//concept of digits
void DigitConcept(int n)
{
    // lets say i want to extract the last digit of a given number n;
    // I will simply modulo the number by 10
    
//    int lastDigit = n%10;

    // lets say i want to continue extracting the digits
    while (n>0)
    {
        int lastDigit = n%10;
        n = n/10; // to get the next digit we will divid and take the integer part of the number

    }
    
}
int main(){
    int n;
    cin >> n;

}