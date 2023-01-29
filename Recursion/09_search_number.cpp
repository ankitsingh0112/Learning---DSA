/*

Coding Problem
Problem Statement: Check number recursively
Problem Level: EASY
Problem Description:
Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
'true' or 'false'

Constraints :
1 <= N <= 10^3

Sample Input 1 :
3
9 8 10
8

Sample Output 1 :
true

Sample Input 2 :
3
9 8 10
2

Sample Output 2 :
false

*/

#include<iostream>
using namespace std;

bool isPresent(int arr[], int key, int size) {
    if(size == 0)
        return false;
    if(arr[0] == key)
        return true;
    isPresent(arr+1, key, size-1);
}

int main() {
    int arr[10];
    int size;
    int key;
    cin >> size;
    for(auto i = 0; i < size; i++)
        cin >> arr[i];
    cin >> key;
    bool check = isPresent(arr, key, size);
    if(check)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}