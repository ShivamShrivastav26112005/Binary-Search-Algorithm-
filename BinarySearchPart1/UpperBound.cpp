// using binary searching 
// we have an array = {1,2,6,8,24,40}
// target ele. 8
// find upper bound of the array 
// ans - 24

// here we use also a chech mark (boolean check mark)

#include<iostream>
using namespace std;
 int main()
 {
    int n=6;
    int arr[]={1,2,6,8,24,40};
    int tar= 3;

    // array print 
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // binary search

    int lo=0;
    int hi=n-1;
    bool flag = false;
// here using becoz we travel in the array without using loop we can't travel in an array 
    while(lo<=hi)
    {
       int mid= (hi+lo)/2;
       if(arr[mid]==tar)
       {
        flag=true;
       cout<<arr[mid+1]; // arr[mid] ele.
       break;
       }
       else if(arr[mid]<tar) 
       lo=mid +1;

       else  
       hi=mid-1;


    } 
    if(flag==false)
    cout<<arr[lo];
 }

// 1 2 6 8 24 40 
// 6