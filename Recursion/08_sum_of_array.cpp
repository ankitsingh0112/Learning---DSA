/*

Coding Problem
Problem Statement: Sum of array (recursive)
Problem Level: EASY
Problem Description:
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces

Output Format :
Sum

Constraints :
1 <= N <= 10^3

Sample Input 1 :
3
9 8 9

Sample Output 1 :
26

Sample Input 2 :
3
4 2 1

Sample Output 2 :
7

*/


#include<iostream>
using namespace std;

int sum_array(int arr[], int size) {
    if(size == 0)
        return 0;
    return arr[0] + sum_array(arr+1, size-1);
}

int main()
{
    int arr[10];
    int size;
    cin >> size;
    for(auto i = 0; i < size; i++){
        cin >> arr[i];
    }
    int sum = sum_array(arr, size);
    cout << sum << endl;
    return 0;
}