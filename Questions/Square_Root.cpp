// Question Link
// Algorithm Used =>  Binary Search => Complexity => o(logn)
// https://www.codingninjas.com/codestudio/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include<iostream>
using namespace std;

//More Precision
double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

//Integer Result
long long int BinarySearch(long long int n)
{
    int s=0;
	unsigned int e=n;
	long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s<=e)
    {
        long long int sqrt = mid*mid;
        if(sqrt == n)
        {
            return mid;
        }
        if(sqrt < n)
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    long long int n = 27;
    int tempSol = BinarySearch(n);
    cout << "Sqaure Root Of "<< n <<" is:- " << morePrecision(n, 3, tempSol); 
    return 0;
}