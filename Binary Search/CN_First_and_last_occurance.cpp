/*

You have been given a sorted array/list ARR consisting of 'N' elements. You are also given an integer 'K'. Now, your task is to find the first and last occurance of 'K' in ARR.

Note :
1. If 'K' is not present in the array, then the first ans the last occurance will be -1.
2. ARR may contain duplicates elements.

Sample Input 1:
2
6 3
0 5 5 6 6 6
8 2
0 0 1 1 2 2 2 2
Sample Output 1:
-1 -1
4 7
Explanation Of Sample Output 1:
For the first test case, 3 is not present in the array. Hence the first and last occurrence of 3 is -1 and -1.

For the second test case, the first occurrence of 2 in at index 4 and last occurrence is at index 7.
Sample Input 2:
2
4 0
0 0 0 0
1 2
2
Sample Output 2:
0 3
0 0
*/

#include <iostream>
using namespace std;

int first_Occurance(int a[], int n, int k)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (a[m] == k)
        {
            ans = m;
            e = m - 1;
        }
        else if (a[m] < k)
            s = m + 1;
        else
            e = m - 1;
    }
    return ans;
}

int last_Occurance(int a[], int n, int k)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (a[m] == k)
        {
            ans = m;
            s = m + 1;
        }
        else if (a[m] < k)
            s = m + 1;
        else
            e = m - 1;
    }
    return ans;
}

int main()
{
    int arr[10], n, k, first_occur, last_occur;
    cin >> n >> k; // size of array >> key to find
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    first_occur = first_Occurance(arr, n, k);
    cout << "First occurance is at index : " << first_occur << endl;
    last_occur = last_Occurance(arr, n, k);
    cout << "Last occurance is at index : " << last_occur << endl;
}