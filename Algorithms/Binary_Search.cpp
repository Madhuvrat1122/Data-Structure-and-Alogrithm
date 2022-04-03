#include<iostream>
using namespace std;

int Binary_Search(int arr[], int size, int key)
{
    int start = 0;
    int end = size;
    // int mid = ( start + end ) / 2;
    int mid = start + ( end - start) / 2;

    while( start <= end )
    {
        if( arr[mid] == key )
        {
            return mid;
        }

        if( key > arr[mid] ) //Right Side
        {
            start = mid + 1;
        }
        
        else //Left Side
        {
            end = mid - 1;
        }
        mid = start + ( end - start) / 2; 
    }
    return -1;
}

int main()
{
    int evenarr[4] = {11,56,78,98};
    int oddarr[5] = {2,4,7,8,9};

    cout <<" 11 is At:- " << Binary_Search(evenarr,4,56) << endl;
    cout <<" 9 is At:- " << Binary_Search(oddarr,5,8) << endl;
    
    return 0;
}