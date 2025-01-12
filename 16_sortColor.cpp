// Leetcode - Sort Colors (Q75)
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{1,0,2,1,0,1,2};
    int m,h,l;
    m=l=0;
    h=arr.size()-1;
    while(m<=h){
        if (arr[m]==0)
        {
            swap(arr[m],arr[l]);
            m++;
            l++;
        }
        else if(arr[m]==1)
        {
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
        
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}