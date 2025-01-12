#include<bits/stdc++.h>
using namespace std;
int findUnique(vector<int> arr){
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements :"<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    
    int uniqueElement = findUnique(arr);
    cout<<"The Unique Element is : "<<uniqueElement<<endl;
}