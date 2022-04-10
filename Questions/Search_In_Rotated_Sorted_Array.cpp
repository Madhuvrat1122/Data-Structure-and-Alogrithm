// Question Link
// Algorithm Used =>  Binary Search => Complexity => o(logn)
// https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include<iostream>
using namespace std;

// Get the Pivot - By Love Babbar
int getPivot(int arr[], int n)
{
    int start = 0, end = n-1, mid = start + ( end - start ) / 2;
    while ( start < end )
    {
        if ( arr[mid] >= arr[0] )
        {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + ( end - start ) / 2;
    }
    return start;
}


int BinarySearch(int arr[], int start, int end, int k)
{
    int mid = start + ( end - start ) / 2;
    while ( start <= end )
    {
        if ( arr[mid] == k)
        {
            return mid;
        }
        else if( arr[mid] > k )
        {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + ( end - start ) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {2,4,5,6,8,9,1};
    int pivot = getPivot(arr,7);
    int k = 1; // search element
    if ( k >= arr[pivot] && arr[6] >= k )
    {
        cout << BinarySearch(arr,pivot,6,k);
    }
    else {
        cout << BinarySearch(arr,0,pivot-1,k);
    }
    
    return 0;
}