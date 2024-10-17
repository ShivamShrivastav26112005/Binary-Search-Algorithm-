// we have to find smallest missing ele in an array
// method.1- linear search
// method.2- binary search
// positive or non negative

// Methods . 1-> linear search T.C.= O(n)

// #include<iostream>
// using namespace std; 
// int main()
// {
//     int n=8;
//     int arr[]={0,1,2,3,4,6,7,9};
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // find missing ele.

//     for(int i=0; i<n; i++)
//     {
//         if(i!=arr[i]){
//         cout<<i<<" is the missing ele ";
//         break;
//     }
//   }
// }

// // 0 1 2 3 5 6 7 9 
// // 4 is the missing ele



// Methods.2-> Binary search T.C.= O(logn)


#include<iostream>
using namespace std; 
int main()
{
    int n=6;
    int arr[]={0,1,2,8,9,12};
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

//   find missing ele.

int lo=0;
int hi=n-1;
    int ans=-1; // means when not missing anything return -1
while(lo<=hi)
{
    int mid= lo+(hi-lo)/2;
    if(arr[mid]==mid) lo=mid+1;
    else
    {
        ans=mid;
        hi=mid-1;
    }
}
cout<<ans;
}

// 0 1 2 8 9 12 
// 3