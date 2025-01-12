// Reverse an Array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter The Size of an Array : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}