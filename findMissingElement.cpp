#include<bits/stdc++.h>
using namespace std;
void findMissing(int *arr,int size){
    int i =0;
    while (i<size)
    {
        int index = arr[i]-1;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else{
            i++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[i] != i+1){
            cout<<i+1<<" ";
        }
    } 
}
int main(){
    int arr[] = {5,3,3,1,3};
    int size = sizeof(arr)/sizeof(int);
    findMissing(arr, size);
    return 0;
}