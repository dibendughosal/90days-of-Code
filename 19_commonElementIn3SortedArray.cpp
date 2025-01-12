#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[] = {10,20,30,40,80,90};
    int arr2[] = {20,50,60,80,120,130};
    int arr3[] = {10,20,30,70,80,100,120};
    int i,j,k;
    i=j=k=0;
    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);
    int n3 = sizeof(arr3)/sizeof(int);

    while(i<n1 && j<n2 && k<n3){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            cout<<arr1[i]<<" ";
            i++,j++,k++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
}