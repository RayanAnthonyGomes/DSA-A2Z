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

//3.
//Vectors
/*
This is used to replace arrrays. Like we cant change the size of a predefined array. 
This is dynamical array which can change its size as per user needs.

*/

//4.
//List
//Same as vectors but comes cheaper

//5.Deque
//all functions are same as vectors and lists

// 6.Stack
//LIF0 -> Last in first out
// Only 3 funtions : push pop top


//7.Queue
//Similar to stack but FIFO --> First in First out

//8.Priority Queue
//Max elems stay at top
//Also can handle minimum order

//9.Set
//Unique, sorted order

// 10.multiset
// obeys sorted and duplicate elements also
// rest are same as set 

// 11. unordered_set
// doesnt store in a sorted order 
// unique elements for sure
// O(1)
// But lower / upper bound doesnt work 

// 12. Map 
// Same values but different roll numbers. Where roll numbers are actually keys 
// stores everything {key, value} 

// 13. multimap 
// Can store duplicate keys 

// 14. Unordered map 
// not stored in sorted order but unique keys
// O(1)

void myPair(){
    pair<int,int> p = {1,3};
    cout << p.first << p.second;

    pair<int, pair<int,int>> p2 = {1, {2,3}};
    cout << p.first << p2.second.second;

            pair<int,int> arr[] = {{1,3}, {2,4}, {6,7}};
            cout << arr[1].second;


}


void myVector(){
//Declaration
vector<int> v;
//add elems
v.push_back(1); // {1,  }
v.emplace_back(2); // {1,2} auto increases size of the vector and adds 2

//add pairs to vectors
vector<pair<int,int>> ve; 
ve.push_back({1,2}); //Using push back we need to give the pair. hence we added {} to it
ve.emplace_back(1,2); //Automatically gets the datatype as pair and takes {1,2}

//Predefined vector
vector<int> vec(5,100); // {100,100,100,100,100}
//or
vector<int> vec(5); // { , , , , }  stores garbage values in place of 5

//copying vectors
vector<int> v1(5,100);
vector<int> v2(v1);  //copied from v1. 

//Accessing elements inside vector
//1. Using features of array
cout << v[0];
//or
cout << v.back(); //prints the last elem

//2.Using iterator
    //a. Define Iterator:
    //An iterator is an object that allows sequential access to elements in a collection (like lists, tuples, or dictionaries) without exposing the underlying structure. It follows the Iterator Design Pattern
    //v = {1,2,3,4,5}
    //b. v.begin()
    vector<int>::iterator itName = v.begin(); // starting element of vector .. --> {1}
    itName++; //goes after 1--> {2}
    cout << *(itName) << " "; //accesses the value of the iterator memory address --> prints {2}
    
    //c.v.end()
    vector<int>::iterator it = v.end(); //points to smth just after last element 
    //we can get it by it-- --> subtract 1 from end to get the last elem
    it--;
    cout << *(it);
    
    //d. v.rend()
    vector<int>::iterator t = v.rend(); 
    //e. v.rbegin();
    vector<int>::iterator t = v.rbegin(); 
    

    //printing vector
    //Method a
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    //method b
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    //method c for each loop
    for (auto it : v)
    {
        cout << it << " ";
    }


    //Deletion in Vector
    //v.erase(iterator);
        //{1,2,3,4,5,6}
        v.erase(v.begin()+1);
        v.erase(v.begin()+2, v.begin() + 4)
        //[Start,end) --> end is given just right after the element i wanna remove

    

    //Insert Functions in vector
        vector<int> v(2,100);
        v.insert(v.begin(),300); 
        //{300,100,100}
        v.insert(v.begin()+1,2,10); //add multiple num; {300,10,10,100,100}

        vector<int> copy(3,100);
        v.insert(v.begin(),copy.begin(),copy.end());

    
    //more
    v.size(); //how many elems
    v.pop_back; //removes last elem
    v1.swap(v2); //swaps v2 to v1
    v.clear(); // shows if the vector is empty or not
}


void myList(){
    list<int> ls;
    ls.push_back(1); {1}
    ls.emplace_back(2); {1,2}
    ls.push_front(4); {4,1,2}
    ls.emplace_front(5); {5,4,1,2}

    //all other funtions are same
}

void myDeque(){
    deque<int> ls;
    ls.push_back(1); {1}
    ls.emplace_back(2); {1,2}
    ls.push_front(4); {4,1,2}
    ls.emplace_front(5); {5,4,1,2}
}


void myStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    st.top();// --> 5
    st.pop(); //removes 5
    st.size();
    st.empty(); //false
    st1.st.swap(st2);
}

void myQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.back() += 5; //{1,2,3,9}
    q.pop(); //{2,3,9}
}


void myPriorityQueue(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(9); //{9,5,2}

    //Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(1); // {1,2,5}
}

void mySet(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.emplace(1);
    st.insert(5); //{1,2,5}

    auto it = st.find(2); //--> Iterator points at 2
    auto it = st.find (6); //We dont have 6 so it points right after 5

    st.erase(4);

    int cnt = st.count(1); //if we have --> 1; if we dont have --> 0
    //{1,2,3,4,5,6}
    auto it1 = st.find(3);
    auto it2 = st.find(5);
    st.erase(it1,it2) //{1,2,5,6} [start,end)

    st.lower_bound(2);
    st.upper_bound(3); //Explained on another video will catch on it later

    //Complexity
    //Always --> log( )
}

void multiset(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); {1,1,1}

    ms.erase(1); //removes all 1's

    ms.erase(ms.find(1)); //removes only the 1 specified

    ms.erase(ms.find(1), ms.find(1)+2); goes till 2. //{1,1,1} first 2 1's are deleted here
}

void UnorderedSet(){
    unordered_set<int> ust;
}

void map(){
    //map<key,value> nameofmap;
    map<int,int> mpp;
    mpp[1] = 2; //key 1 and value is 2
    mpp.emplace({3,1});
    mpp.insert({2,4}); //--> {{1,2} {2,4} {3,1}} in a ordered fashion

    map<pair<int,int>,int> mpp;
    mpp[{2,3}] = 10; {{2,3},10}

    //printing
    for(auto it : mpp){
        cout << it.first <<" " << it.second << endl;
        //prints the whole map
        1 2
        2 4
        3 1
    }
    cout << mpp[1] ; ==>2
    auto it = mpp.find(3);
    cout << *(it).second; //Key 3 find korbe ar second jinish ta print korbe which is 1
    auto it = mpp.find(5); //since 5 is not there it will return the v.end()

}
void multiMap(){
    
}

void UnorderedMap(){

}

//Basic algorithm

void sortNum(){

//for arrays and vectors
    int a[4] = {3,5,1,2};
        sort(a,a+4);
//start is included but end is excluded

//if we had a vector we would use:
        sort(v.begin(), v.end());

//If we wanted to sort a specific part
//   -->{3,1,4,5} lets say we want to do 1 and 4
        sort(a+1,a+3); //as i said start is inclu but end is exclu
}

void sortInDescending(){
    //What if i want to sort in desc. order
    sort(a,a+n, greater<int>)
    
}

//take multiple data types of your desire. In my case i have pair. so i will copy paste and make it 2 pairs

bool MyComperator(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true; //this is my optimal desire(correct way)
    if(p1.second > p2.second) return false; //not my correct way
    //otherwise they are the same. Now if they are same we check the first elem
    if(p1.first > p2.first) return true; 
    return false;
}
void sortInMyWay(){
    //What if i have a specific way to sort 
    /*
    lets say we have a pair 
    pair<int,int> a[] = {{1,2}, {4,1}, {3,1}}
    //sort by second element in increasing fashion
    //if the element is same do it by the 1st element and in descending order
    */
   pair<int,int> a[] = {{1,2}, {4,1}, {3,1}};
    sort(start,end,MyComperator);
}

void NumToBinary(){
    int n = 7;
    int co = __builtin_popcount();
    //returns 3 as it has 7 = 111

    long long nn = 1231242135412451;
    int coo = __builtin_popcountll();
}

void nextPermutation(){
    //always start in sorted fashion
    string s = "123";
    sort(s.begin(), s.end());

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(),s.end()));
    
}

void maxMin(){
    int a[n];
    int maxi = *max_element(a, a+n);
    int mini = *min_element(a, a+n);
}

int main(){
//endl of stl;
}