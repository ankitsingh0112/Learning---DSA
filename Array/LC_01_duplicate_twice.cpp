/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer 
appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]

Example 2:

Input: nums = [1,1,2]
Output: [1]

Example 3:

Input: nums = [1]
Output: []

 

Constraints:

    n == nums.length
    1 <= n <= 105
    1 <= nums[i] <= n
    Each element in nums appears once or twice.

*/

#include<iostream>
using namespace std;
/*

// first I just applied whatever logic comes in my mind....but this logic is not efficient so later i tried to optimize it....

void duplicates(int arr[], int size)
{
    int dup[10];
    int k = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(i != j && arr[i] == arr[j])
            {
                // cout << endl << arr[i] << endl;
                dup[k++] = arr[i];
            }
        }
    }
    // cout << endl << k << endl;
    for(int i = 0; i < k; i++)
    {
        cout << dup[i] << " ";
    }
}
*/

// this is the required logic whose complexity is O(n) {My own logic}....

void duplicates(int arr[], int size){
    int dup[10];
    int k = 0;
    int j = size - 1;
    for(int i = 0; i < size; i++)
    {
        if(i != j && arr[i] == arr[j])
        {
            dup[k++] = arr[i];
            j--;
        }
        else if(i == j)
        {
            j--;
            i = 0;
        }
    }
    cout << endl << k << endl;
    for(int i = 0; i < k; i++)
    {
        cout << dup[i] << " ";
    }
}


int main()
{
    int n;
    cin >> n;
    int arr[10];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    duplicates(arr, n);
    return 0;
}