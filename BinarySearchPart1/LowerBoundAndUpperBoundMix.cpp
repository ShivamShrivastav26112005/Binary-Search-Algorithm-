// lower bound found using linear search

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 9;
//     int arr[] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
//     int x = 12;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > x)

//         {
//             cout << arr[i - 1] ;
//             break;
//         }
//     }
// }
// 1 2 4 5 9 15 18 21 24
// 9

// T.C.= O(n)

// Upper bound found using linear search

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 9;
//     int arr[] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
//     int x = 18;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > x)

//         {
//             cout << arr[i] ;
//             break;
//         }
//     }
// }

// 1 2 4 5 9 15 18 21 24
// 15

// 1 2 4 5 9 15 18 21 24
// 21

// T.C.= O(n)

// lower bound of the x(target) ele.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 9;
//     int arr[] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
//     int x = 19;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // lo, hi, mid is a index
//     // arr[mid] is ele.

//     int lo = 0;
//     int hi = n - 1;

//     bool flag = false;
//     while (lo <= hi)
//     {
//     int mid = (hi + lo) / 2;
   
//         if (arr[mid] == x){
//             flag = true;
//         cout << arr[mid - 1];
//         break;
//         }
//     else if (arr[mid] < x) lo = mid + 1;
//     else hi = mid - 1;
// }

// if (flag == false)
//     cout << arr[hi];
// }



// find lower bound of the target elements


// step . 1->
// #include<iostream>
// using namespace std; 
// int main()
// {
//     int n=5;
//     int arr[]={1,2,3,4,5};
//     int target =2;

//     // binary searching
//     // ow and high is a two pinter which points 0th index and the last index
//     int low=0;
//      int high=n-1;


//      while(low<=high)
//      {
//         int middle=(high+low)/2;

//         if(arr[middle]==target) cout<<arr[middle];
//         else
//         cout<<"no ";
//         break;

//      }

// }





// // step . 2-> final step ...

// #include<iostream>
// using namespace std; 
// int main()
// {
//     int n=7;
//     int arr[]={1,2,3,5,8,34,56};
//     int target =35;
//      for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }  
//      cout<<endl;


//      int low=0;
//      int high=n-1;
//     bool flag = false;

//      while(low<=high)
//      {
//         int middle=(high+low)/2;

//         if(arr[middle]==target)
//         {
//         flag=true;
//          cout<<arr[middle];
//          break;
//         }

//       else if (arr[middle]<target)  
//       low=middle+1;
//     //   else if(arr[middle]>target) 
//     else
//       high= middle-1;
//      }
//     if( flag==false)
//      cout<<arr[high];

// }
// // 1 2 3 5 8 34 56 
// // 34



//  find the upper elements of the target ele.
#include<iostream>
using namespace std; 
int main()
{
    int n=7;
    int arr[]={1,2,3,5,8,34,56};
    int target =34;
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }  
     cout<<endl;


     int low=0;
     int high=n-1;
    bool flag = false;

     while(low<=high)
     {
        int middle=(high+low)/2;

        if(arr[middle]==target)
        {
        flag=true;
         cout<<arr[middle+1];
         break;
        }

      else if (arr[middle]<target)  
      low=middle+1;
    //   else if(arr[middle]>target) 
    else
      high= middle-1;
     }
    if( flag==false)
     cout<<arr[low];

}
// 1 2 3 5 8 34 56 
// 56