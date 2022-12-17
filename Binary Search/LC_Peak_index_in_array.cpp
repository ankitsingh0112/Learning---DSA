/*
Peak Index in a Mountain Array ::::----->>>>>

An array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.



Example 1:

Input: arr = [0,1,0]
Output: 1
Example 2:

Input: arr = [0,2,1,0]
Output: 1
Example 3:

Input: arr = [0,10,5,2]
Output: 1


Constraints:

3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.
*/

#include <iostream>
using namespace std;

// Approach - 01 : (my own logic) :
// int peakIndex(int arr[], int size)
// {
//     int start = 0, end = size - 1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
//             return mid;
//         else if (arr[mid] < arr[mid + 1])
//             start = mid + 1;
//         else
//             end = mid - 1;
//     }
// }

// Approach - 02 : (Love Babbar) :-

int peakIndex(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid;
    while(s < e)
    {
        mid = s + (e-s)/2;
        if(arr[mid] < arr[mid + 1])
            s = mid + 1;
        else
            e = mid;
    }
    return s;
}

int main()
{
    int arr[10], n;
    cin >> n; // size of the array
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int index = peakIndex(arr, n);
    cout << "Peak index in Mountain array : " << index << endl;
    return 0;
}