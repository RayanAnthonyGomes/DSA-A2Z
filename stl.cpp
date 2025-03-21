#include<bits/stdc++.h> //1 Library to include every libraries we need 

using namespace std; // To shorten process of writing std:: cout << a;
//What is stl in c++? 
    //Algo, func, iterators, containers
//1.
//Functions
/*
    a) Void Functions:
        Doesnt return us anything
    b) Return Type function
        returns us something
        example:
                int sum(int a, int b){
                    return a+b;
                }
                    after that we call it on the main function.
                    note that we can use any datatype we want in the place of "int"
*/

//2.
//Pairs
/*
Part of utility library, to store multiple "DataTypes"
How Declare? --> pair<int,int> p = {1,3};
                    cout << p.first << p.second;

WHat if i have 3 variables?
    --> pair<int, pair<int,int>> p = {1, {2,3}};
            cout << p.first << p.second.second;

Can we use arrays in pairs?
--> pair<int,int> arr[] = {{1,3}, {2,4}, {6,7}};
            cout << arr[1].second;
*/
void myPair(){
    pair<int,int> p = {1,3};
    cout << p.first << p.second;

    pair<int, pair<int,int>> p2 = {1, {2,3}};
    cout << p.first << p2.second.second;

            pair<int,int> arr[] = {{1,3}, {2,4}, {6,7}};
            cout << arr[1].second;


}
int main(){

}