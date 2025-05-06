#include<bits/stdc++.h>
using namespace std;

int main(){
//Initial Problem
    // Imagine we are given an array {1,2,1,3,2}
    // Now find out how many times does 1 appear in the array.
    
    //First approach iterate through entire array and update count in for loop
    
    int n; //the number we are finding
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == n){
             cnt++;
        }
    }

    //Suppose koto gula number eta bola hoy nay. Time Complexity will be 0(QxN)
        //iMAGINE 10^5 numbers.
        //so, 10^5 x 10^5 = 10^10;
        // ** 10^8 things take 1 seconds
        //so 10^10 will take 100 seconds which is very bad for our program 


//Hashing
    //In order to optimize this approach, we need to use hashing. If we say the definition of hashing in a naive way, it is nothing but the combination of the steps, pre-storing, and fetching
// ---> Prestoring & Fetching
/*  
    Hashing concept
    1.Hash array arr[n] = {                         }
    2.Compute with given array and take the numbers --> frequency
    3.hash[1] = how many times did 1 appear
*/

//Base program:
//Given array size and taking input of array elements. Next up is query input and numbers.
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
//precompute
int x; //Whatever the problem states maximum size of array
int hash[x] = {0};
for (int i = 0; i < n; i++)
{
    hash[arr[i]]+=1;
}

//queries
int q;
while(q--){
    int num;
    cin >>num;
    //FETCH FREQUENCY
    cout << hash[num] << endl; 
}

//What if the size of the array was 10^9
//We CANT. Because the maximum size of an array is 10^6 for int *(inside main)
//Otherwise it will give us segmentation fault.
//But globally declaration will give us 10^7, for bool inside main 10^7 and globally 10^8


//CHARACTER HASHING
//Imagine 
string s = "abcedfegh";
//Iterate through the string with each character
int cnt = 0,c;
cin >> c;
for (int i = 0; i < n; i++)
{
    if (s[i] == c)
    {
        cnt++;
    }
}


//How do u hash them?
//Imagine Lower case letters --> 26 characters 
//ASCII VALUES: a = 97; z = 122; A =65; Z =96 
//Formula to get the corresponding index in hash array = CHARACTER - 'a'

string s;
cin >> s;

//Precompute
int hash[26] = {0};
for (int i = 0; i < s.size(); i++)
{
    hash[s[i]-'a']++;
}

int q;
cin >> q;
while(q--){
    char c;
    cin >> c;
//FETCH
    cout << hash[c - 'a'] << endl; 
}




//IF lower and uppercases are mixed?
//Precompute
int hash[256] = {0};
for (int i = 0; i < s.size(); i++)
{
    hash[s[i]]++;
}

int q;
cin >> q;
while(q--){
    char c;
    cin >> c;
//FETCH
    cout << hash[c] << endl; 
}

//CHARACTER HASHING WONT HAVE PROBLEMS BCZ IT HAS ONLY 256 chars


// How to hash large numbers like 109 or higher:

//--> Until now, we have learned the method of number hashing but using this method we cannot hash large numbers like 109 or higher. We can solve this problem using the STL map and unordered_map in C++ or the HashMap in Java collection. Now, we are going to discuss these concepts in detail and most of the concepts are the same in map/unordered_map(in C++) and HashMap(in Java).

//MAP 
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}

//MAP declaration
map<int,int> mpp;
for (int i = 0; i < n; i++)
{
    mpp[arr[i]]++;
}
//To show you that it takes in sorted order
//iterate in the map
for (auto it = : mpp )
{
    cout << it.first << "-->" << it.second << endl;
}


//queries
int q;
while(q--){
    int num;
    cin >>num;
    //FETCH FREQUENCY
    cout << mpp[num] << endl;

}
//REMEMBER: Map keeps all of it in sorted order.



//Map of string hashing
//map <char = key, int = value>

//PRogram:
string s;
cin >> s;
//Precompute MAP
map<char,int> mpp;
for (int i = 0; i < s.size(); i++)
{
    mpp[s[i]]++;
}

int q;

while(q--){
    char c;
    cin >> c;
    //fetch
    cout << mpp[c] << endl;
}


//Time complexity of maps
// STORING & FETCHING --> log(N)--> best,avg,worst

//UNORDERED MAPS
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}

//MAP declaration
unordered_map<int,int> mpp;
for (int i = 0; i < n; i++)
{
    mpp[arr[i]]++;
}
//To show you that it takes in sorted order
//iterate in the map
for (auto it = : mpp )
{
    cout << it.first << "-->" << it.second << endl;
}


//queries
int q;
while(q--){
    int num;
    cin >>num;
    //FETCH FREQUENCY
    cout << mpp[num] << endl;
}
//DOESNT STORE IN SORTED ORDER
//ADVANTAGES OF UNORDERED
//STORING & FETCHING --> TC --> 0(1){for avg and best} and 0(N)--> linear time {worst case} once in a blue moon it happens


// //HASHING
// 1. Division MEthod
// 2. Folding Methond lagena
// 3. Mid square method lagena


//DIVISION METHOD:
//Array { 2,5,15,16,28,139} and cant use size > 10 x
// so taken array{ 0,1,2..9}
//and we'll modulate with 10. arr[i] % 10
//LINKED LIST + BINARY SEARCH --> DONT NEED THIS NOW and just understanding logic.

//collision
// Now, if we are applying linear chaining and division rule and we find that all elements of an array get stored in a single index, then we will call it a case of collision.



///IN a map the key can be anything 

//IN an unordered map keys can be string,char, int double etc



}