 // this is incorrect code.
 
 // here we use vector for solving these q.
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int target = 3;
    int arr[] = {1, 3, 5, 6};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    // binary search algorithm = we find mid(index) becoz *** we reduce our search space by half ***
    {
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int middle = (high + low) / 2;

            if (arr[middle] == target)
             cout << arr[middle]; 
           else if (arr[middle] > target)
                high = middle - 1;
                //  cout << arr[middle];
                 
            else 
                low = middle + 1;
                cout << arr[low]; 
                break;
        }
        
    }
}