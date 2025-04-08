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

void ReverseNumber(int n){
    int RevN = 0;
    while (n>0)
    {
        int lastdigit = n%10;
        n = n/10;
        RevN = (RevN*10) + lastdigit;
    }
    
}

void Palindrome(int n){
    //121 == reverse == 121 == Palindrome
    //Reverse number == N 
    int revN = 0, duplicate = n;
    while (n>0)
    {
        int lastDigit = n%10;
        revN = (revN*10) + lastDigit;
        n = n/10;
    }
    if(revN==duplicate){
        return true;
    }else{
        return false;
    }
    
}

void ArmStrongNumbers(int n){
    //n = 371 == 3^3 + 7^3 + 1^3
    int sum = 0,dup = n;
    while (n>0)
    {
        int ld = n%10;
        sum = sum + (ld)*(ld)*(ld);
        n = n/10;

    }
    if( dup == sum ){
        cout << "Armstrong";
    }
}

void Divisors(int n){

   // n = 10 == 1,2,5,10;
   //way 1;
   for (int i = 1; i <= n; i++)
   {
        if (n%i == 0)
        {
            cout << i;
        }
        //O(nLogN) where n is the number of factors    
   }
   
   //way 2:
   vector <int> ls;
   for (int i = 01; i <= sqrt(n); i++)
   {
        if (n%i == 0)
        {
            ls.push_back(i);
            if((n%i) != i){
                ls.push_back(n/i);
            }
        }
        sort(ls.begin(), ls.end());
        for(auto it:ls){
            cout << it << " ";
        }
        
   }
    //O(sqrt(n))   
}

void PrimeNumbers(int n){
    //exactly 2 factors: 1 and itslef
    int count = 0;
    for (int i = 01; i < n; i++)
    {
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
    
            }
        }
       
        if(count == 2){
            cout << "true";
        }else{
            cout << "false;";

        }
        //big0{sqrt(n)}
    }
    
}


int main(){
    int n;
    cin >> n;

}