#include<bits/stdc++.h>
using namespace std;

//Selection Sort
/*
    We get the minimum and swap 
    52 46 24
    24 46 52 

*/
void selection_sort(int arr[], int n){
    for (int i = 0; i < n-2; i++)
    {
        int min = i;
        for (int j = i; j < n-1; j++)
        {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
                int temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
    }
     //Worst/Avg/best == 0(N^2)
}

void bubble_sort(int arr[], int n){
    for (int i = n-1; i > 1; i--)
    {
        int didSwap = 0;
        for (int j = 0; j < i - 1; j++)
        {
            if(arr[j] > arr[j+1]){
                //Swap
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0) break; //Optimized Because of already sorted asc order.
    }
    //Best TC = O(N) --> already sorted order
    //Worst/Avg == 0(N^2)
}

void insertion_sort(int arr[], int n){
    for (int i = 0; i <= n-1; i++)
    {
        int j = i;
        while (j>0 && arr[j-1] > arr[j])
        {   
            int temp =arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
        //avg/worst ==> o(NxN)
        //best ==> (already sorted) --> o(n)
    }
    
}


int main(){
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
insertion_sort(arr,n);
for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}



}