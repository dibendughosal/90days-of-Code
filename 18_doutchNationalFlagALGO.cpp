// Doutch National Flag Algorithm (two Pointer Approach)
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{1,2,-5,4,3,-2,7};
    int h = nums.size()-1;
    int l = 0;
    while(l<h){
        if (nums[h]>0)
        {
            h--;
        }
        else if(nums[l]<0)
        {
            l++;
        }
        else
        {
            swap(nums[l],nums[h]);
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
}