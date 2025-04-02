#include <bits/stdc++.h> // Includes all necessary libraries
using namespace std;

//---------------------------
//        STL IN C++
//---------------------------

// 1. Functions
/*
    a) Void Functions - Do not return anything.
    b) Return Type Function - Returns a value.
*/

// 2. Pairs
void myPair() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 3}, {2, 4}, {6, 7}};
    cout << arr[1].second << endl;
}

// 3. Vectors
void myVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> ve;
    ve.push_back({1, 2});
    ve.emplace_back(1, 2);

    vector<int> vec(5, 100);
    vector<int> v1(5, 100);
    vector<int> v2(v1);

    cout << v[0] << " " << v.back() << endl;

    for (auto it : v)
        cout << it << " ";
    cout << endl;

    v.erase(v.begin() + 1);
    v.erase(v.begin() + 2, v.begin() + 4);

    vector<int> copy(3, 100);
    v.insert(v.begin(), copy.begin(), copy.end());

    cout << "Size: " << v.size() << endl;
    v.pop_back();
}

// 4. List
void myList() {
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(4);
    ls.emplace_front(5);
}

// 5. Deque
void myDeque() {
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(5);
}

// 6. Stack (LIFO)
void myStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.emplace(5);
    cout << "Top: " << st.top() << endl;
    st.pop();
}

// 7. Queue (FIFO)
void myQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.back() += 5;
    cout << "Front: " << q.front() << endl;
    q.pop();
}

// 8. Priority Queue
void myPriorityQueue() {
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(9);
    cout << "Max: " << pq.top() << endl;
    pq.pop();

    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(5);
    min_pq.push(2);
    min_pq.push(1);
    cout << "Min: " << min_pq.top() << endl;
}

// 9. Set
void mySet() {
    set<int> st = {1, 2, 5};
    cout << "Lower Bound: " << *st.lower_bound(2) << endl;
    st.erase(2);
}

// 10. MultiSet
void myMultiSet() {
    multiset<int> ms = {1, 1, 1};
    ms.erase(ms.find(1));
}

// 11. Unordered Set
void myUnorderedSet() {
    unordered_set<int> ust = {3, 1, 4};
}

// 12. Map
void myMap() {
    map<int, int> mpp;
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    for (auto it : mpp)
        cout << it.first << " " << it.second << endl;
}

// 13. Sorting
void sortNum() {
    int a[] = {3, 5, 1, 2};
    sort(a, a + 4);
    for (int i : a)
        cout << i << " ";
    cout << endl;
}

void sortInDescending() {
    int a[] = {3, 5, 1, 2};
    sort(a, a + 4, greater<int>());
}

// 14. Binary Representation
void NumToBinary() {
    int n = 7;
    cout << "__builtin_popcount: " << __builtin_popcount(n) << endl;
}

// 15. Next Permutation
void nextPermutationExample() {
    string s = "123";
    sort(s.begin(), s.end());
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}

// 16. Max & Min
void maxMin() {
    int a[] = {3, 5, 1, 2};
    cout << "Max: " << *max_element(a, a + 4) << endl;
    cout << "Min: " << *min_element(a, a + 4) << endl;
}

//---------------------------
//          MAIN
//---------------------------
int main() {
    cout << "Pairs: " << endl;
    myPair();

    cout << "\nVectors: " << endl;
    myVector();

    cout << "\nList: " << endl;
    myList();

    cout << "\nDeque: " << endl;
    myDeque();

    cout << "\nStack: " << endl;
    myStack();

    cout << "\nQueue: " << endl;
    myQueue();

    cout << "\nPriority Queue: " << endl;
    myPriorityQueue();

    cout << "\nSet: " << endl;
    mySet();

    cout << "\nMultiSet: " << endl;
    myMultiSet();

    cout << "\nUnordered Set: " << endl;
    myUnorderedSet();

    cout << "\nMap: " << endl;
    myMap();

    cout << "\nSorting: " << endl;
    sortNum();

    cout << "\nSorting in Descending Order: " << endl;
    sortInDescending();

    cout << "\nBinary Representation: " << endl;
    NumToBinary();

    cout << "\nNext Permutation: " << endl;
    nextPermutationExample();

    cout << "\nMax & Min: " << endl;
    maxMin();

    return 0;
}
