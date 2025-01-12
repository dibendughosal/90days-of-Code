#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3] = {
        {1,2,13},
        {5,16,9},
        {7,8,7}
    };
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j] > max){
                max = arr[i][j];
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
            
        }
    }
    cout<<"the maximum number is "<<max<<endl;
    cout<<"the Minimum number is "<<min<<endl;


}