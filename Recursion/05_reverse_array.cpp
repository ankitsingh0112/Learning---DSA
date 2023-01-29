// Write a program to reverse an array using recursion

#include<iostream>
#include <algorithm>
using namespace std;

void reverse(int i, int arr[], int s) {
    if (i >= s/2)
    {
        return;
    }
    swap(arr[i], arr[s-i-1]);
    reverse(i+1, arr, s); 
}

int main()
{
    int odd[5] = {1,3,56,7,4};
    int even[6] = {3,6,2,7,8,0};
    reverse(0, odd, 5);
    reverse(0, even, 6);
    for (int i = 0; i < 5; i++)
    {
        cout << odd[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << even[i] << " ";
    }
    return 0;
}