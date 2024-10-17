    // using binary searching
// array given = 1,5,7,23,25
// lower bound of target ele. 8 
// ans = 7


#include<iostream>
using namespace std; 
int main()
{
    int n=5;
    int arr[]={1,5,7,23,25};
    int tar=8;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // binary search

    int lo = 0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi)
    {
        int mid= (hi+lo)/2;
        if(arr[mid]==tar) {
            flag = true;
        cout<<arr[mid-1];
        break;
        }
        else if(arr[mid]<tar)  lo= mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<arr[hi];
}

// 1 5 7 23 25 
// 7