// // // // Create an Integer Array (Student) with size of 56
// #include<bits/stdc++.h>
// #include<cstring>
// using namespace std;
// // // int main(){
// // //     int student_marks[56]={99,94,92,79,86};
// // //     for (int i = 0; i < 5; i++)
// // //     {
// // //         cout<<student_marks[i]<<" "<<endl;
// // //     }
// // //     for(int j=0 ;j< 5;j++){
// // //         cout<<"The Double of "<<student_marks[j]<<" is : "<<2*student_marks[j]<<endl;
// // //     }
    
    
// // // }
// // // bool find(int arr[], int size, int key){
// //     //     for (int i = 0; i < size; i++)
// //     //     {
// //     //         if(arr[i]==key){
// //     //             return true;
// //     //         }
// //     //     }
// //     //     return false;
        
// //     // }
    
    

// int main(){
// //     // int arr[5]= {1,2,3,4,5};
//     // memset(arr, 0,sizeof(arr)); //replace value by 0 using memset function
// //     // for (int i = 0; i < 5; i++)
// //     // {
// //     //     cout<<arr[i]<<" "; 
// //     // }
// //     // int n;
// //     // int zeros = 0;
// //     // int ones=0;
// //     int arr[]={1,7,0,4,1,5,1,1,8,18,0,2,9,0};
// //     int max = arr[0];
// //     // Maximum No.
// //     for (int i = 1; i < sizeof(arr)/sizeof(int); i++)
// //     {
// //         if(max<arr[i]){
// //             max= arr[i];
// //         }
// //     }
// //     cout<<max<<endl;

// //     // for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
// //     // {
// //     //     if (arr[i] == 0)
// //     //     {
// //     //         zeros++;
// //     //     }
// //     //     if(arr[i]==1){
// //     //         ones++;
// //     //     }
        
// //     // }
// //     // cout<<zeros<<endl;
// //     // cout<<ones<<endl; 

// //     // for (int i = 0; i < 7; i++)
// //     // {
// //     //     if(arr[i]==n){
// //     //         cout<<"Present in "<<i<<" index";
// //     //         break;
// //     //     }
// //     //     else
// //     //     {
// //     //         continue;
// //     //     }
// //     // }
    
// //     // bool flag = find(arr, 7, n);
// //     // if (flag )
// //     // {
// //     //     cout<<"found";
// //     // }
// //     // else
// //     // {
// //     //     cout<<"absent";
// //     // }
// // cout<<"Enter the size of an array - ";
// // int n;
// // cin>>n;
// // int arr[n];
// // cout<<"Enter The element of an array: "<<endl;
// // for (int i = 0; i < n; i++)
// // {
// //     cin>>arr[i];
// // }
// // string minmax;
// // cout<<"To find out Min or Max :- ";
// // cin>>minmax;

// // if (minmax == "Max")
// // {
// //     int max=INT_MIN;
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (arr[i] > max)
// //         {
// //             max = arr[i];
// //         }
        
// //     }
// //     cout<<"The Maximum is "<<max<<endl;
// // }
// // if(minmax == "Min"){
// //     int min = INT_MAX;
// //     for (int i = 1; i < n; i++)
// //     {
// //         if (arr[i] < min)
// //         {
// //             min = arr[i];
// //         }
        
// //     }
// //     cout<<"The Minimum Is "<<min<<endl;
    
// // }


// }

// Reverse an Array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter The Size of an Array : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int start = 0;
    int end = n-1;
    int temp;
    while (start<=end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}