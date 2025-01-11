#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,1,4,3,5};
    int size = sizeof(a)/sizeof(int);
    bool isRepeated = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(a[i]==a[j]){
                isRepeated = true;
                return i+1;
            }
        }
        
    }
    return -1;
    
}