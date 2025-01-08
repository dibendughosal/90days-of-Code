#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][3] ={
        {1,2,3},
        {4,5,6}
    };
    cout<<"Matrix is : "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }  
        cout<<endl;
    }
    cout<<"Tranpose matrix :-"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
    
}