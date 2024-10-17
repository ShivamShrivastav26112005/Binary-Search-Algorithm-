// #include <iostream>
// using namespace std;
// int main()
// {
//     int x =25;
//     int lo = 0;
//     int hi = x;
//     while (lo <= hi)
//     {
//         int mid = lo + (hi - lo) / 2;
//         if (mid * mid == x)
//         {
//             cout << mid;
//             break;
//         }
//         else if (mid * mid < x)
//             lo = mid + 1;
//         else if (mid * mid > x)
//             hi = mid - 1;
//     }
// }

// 5 



// when x=37 ans = 6 sqrt of 37 is 6 becoz 6 is lower bound of complete sq.root


// #include <iostream>
// using namespace std;
// int main()
// {
//     int x =37;
//     int lo = 0;
//     int hi = x;
//     while (lo <= hi)
//     {
//         int mid = lo + (hi - lo) / 2;
//         if (mid * mid == x)
//         {
//             cout << mid;
//             break;
//         }
//         else if (mid * mid < x)
//             lo = mid + 1;
//         else if (mid * mid > x)
//             hi = mid - 1;
//     }
//     cout<<hi; // lower bound of the square root
// }


// 6


// find sq.root of 45 and also its upper bound

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x =45;
//     int lo = 0;
//     int hi = x;
//     while (lo <= hi)
//     {
//         int mid = lo + (hi - lo) / 2;
//         if (mid * mid == x)
//         {
//             cout << mid;
//             break;
//         }
//         else if (mid * mid < x)
//             lo = mid + 1;
//         else if (mid * mid > x)
//             hi = mid - 1;
//     }
//     cout<<lo; // lower bound of the square root
// }

// 7 is the upper bound of complete sq.root of x








#include <iostream>
using namespace std;
int main()
{
    int x ;
    cin>>x;
    int lo = 0;
    int hi = x;
    while (lo <= hi)
    {

         int mid = lo + (hi - lo) / 2;

        long long m= (long long) x; //we store no. in large data type
        long long n= (long long) mid;
       
        if (n*n == m)
        {
            cout << mid;
            break;
        }
        else if (n*n < m)
            lo = mid + 1;
        else if (n*n> m)
            hi = mid - 1;
    }
    cout<<hi;
}

// 525252
// 724 // lower bound 

// 524176 is the complete sqrt of 724