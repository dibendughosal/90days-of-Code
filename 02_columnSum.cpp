#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3] = {
        {1,2,3},
        {5,6,0},
        {7,8,7}
    };
    cout<<"col-wise sum: ";
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[j][i];
        }
        cout<<sum<<" ";
    }
    
}