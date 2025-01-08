#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,3,4,3,4,6,8};
    int sizea = 8;
    int b[] = {4,2,4,5,7,8};
    int sizeb = 6;
    vector<int> ans;
    for(int i = 0;i<sizea;i++){
        int element = a[i]; 
        for(int j=0;j<sizeb;j++){
            if(a[i] == b[j]){
                b[j]=INT_MIN;
                ans.push_back(element); 
            }
        }
    }
    for (int i = 0; i <ans.size(); i++)
    {
        cout<<ans[i]<< " ";
    }
    
}