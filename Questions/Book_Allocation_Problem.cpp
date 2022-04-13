// Question Link
// Algorithm Used =>  Binary Search => Complexity => o(logn)
// https://www.codingninjas.com/codestudio/problems/allocate-books_1090540

#include<iostream>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0;i<n;i++)
    {
        if(pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
    }
    return true;
}

int allocation(int arr[], int n, int m)
{
    int start = 0, sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }   
    int end = sum;
    int mid = start + (end-start) / 2;
    int ans = -1;
    while(start <= end)
    {
        if(ispossible(arr,n,m,mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid+1;
        }
        mid = start + (end-start) / 2;
    }
    return ans;
}


int main()
{
    int arr[] = {8,2,6,8};
    int n = 4, m = 3;
    cout << allocation(arr,n,m);
}