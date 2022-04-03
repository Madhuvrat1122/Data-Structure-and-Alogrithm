// Question Link
// Algorithm Used =>  Binary Search => Complexity => o(logn)
// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include<iostream>
using namespace std;

// First Occurance => Left Most Part
int firstOcc(int arr[], int n, int k)
{
    int start = 0, end = n-1, mid = (start + end ) / 2, ans = -1;
    while( start <= end )
    {
        if( arr[mid] == k )
        {
            ans = mid;
            end = mid - 1;
        }
        else if( arr[mid] > k)
        {
           end = mid - 1; 
        }
        else
        {
            start = mid + 1;
        }
        mid = ( start + end ) / 2;
    }
    return ans;
}

// Last Occurance => Right Most Part
int lastOcc(int arr[], int n, int k)
{
    int start = 0, end = n-1, mid = (start + end ) / 2, ans = -1;
    while( start <= end )
    {
        if( arr[mid] == k )
        {
            ans = mid;
            start = mid + 1;
        }
        else if( arr[mid] > k)
        {
           end = mid - 1; 
        }
        else
        {
            start = mid + 1;
        }
        mid = ( start + end ) / 2;
    }
    return ans;
}


int main()
{
    int arr[] = {0,5,5,6,6,6};
    cout << "First Occurance of 5 is At:- " << firstOcc(arr, 6, 5) << endl;
    cout << "Last Occurance of 5 is At:- " << lastOcc(arr, 6, 5) << endl;
    return 0;
}
