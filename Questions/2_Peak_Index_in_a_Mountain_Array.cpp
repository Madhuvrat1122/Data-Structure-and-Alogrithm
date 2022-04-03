// Question Link
// Algorithm Used =>  Binary Search => Complexity => o(logn)
// https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include<iostream>
using namespace std;
int mountan_peak(int arr[], int size)
{
    int start = 0, end = size - 1, mid = ( start + end ) / 2;
    while( start < end )
    {
        if( arr[mid] < arr[mid+1])
        {
            start=mid+1;
        }
        else{
            end = mid;
        }
        mid = ( start + end ) / 2; 
    }
    return start;
}

int main()
{
    int arr[] = {0,1,0};
    cout << mountan_peak(arr, 3) << endl;
    return 0;
}