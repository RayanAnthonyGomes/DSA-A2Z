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

void countHowManyDigits(int n){
    //tc ==O ( log10(N) )
    int countMyDigits = 0;
    while (n>0)
    {
        countMyDigits = countMyDigits +1;
        n = n/10;
    }
    
//Second way:
    int cnt = (int)(log10(n)+1);
}

void Reverse Number
int main(){
    int n;
    cin >> n;

}