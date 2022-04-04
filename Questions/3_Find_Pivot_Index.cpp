// Question Link
// Algorithm Used =>  Binary Search => Complexity => o(logn)
// https://leetcode.com/problems/find-pivot-index/

#include<iostream>
using namespace std;


//Binary Search Approach

// int pivotIndex(int arr[], int n) {
//     int mid = n / 2;
//     int leftSum = 0, rightSum = 0;
//     //Left side Sum
//     for(int i = 0; i < mid; i++ )
//     {
//         leftSum += arr[i];
//     }
//     //Right side Sum
//     for(int i = n-1; i > mid; i-- )
//     {
//         rightSum += arr[i];
//     }

//     if( rightSum > leftSum)
//     {
//         while( rightSum > leftSum && mid < n -1)
//         {
//             rightSum -= arr[mid + 1];
//             leftSum += arr[mid];
//             mid++;
//         }
//     }
//     else
//     {
//         while( rightSum < leftSum && mid > 0)
//         {
//             leftSum -= arr[mid - 1];
//             rightSum += arr[mid];
//             mid--;
//         }
//     }
//     if( leftSum == rightSum)
//     {
//         return mid;
//     }
//     return -1;
// }


//Other Method
int pivotIndex(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    int left = 0, right = sum;
    for(int i=0;i<n;i++)
    {
        right -= arr[i];
        if(left == right)
        {
            return i;
        }
        else
        {
            left += arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-1,-1,-1,-1,-1,0};
    cout << pivotIndex(arr,6);
    return 0;
}














