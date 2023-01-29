/*
Given an array/list 'ARR' of integers and a position 'M'. You have to reverse the array
after that position.

Sample Input 1:
2
6 3
1 2 3 4 5 6
5 2
10 9 8 7 6
Sample Output 1:
1 2 3 4 6 5
10 9 8 6 7
Explanation 1:
For the first test case,
Considering 0-based indexing we have M = 3 so the
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {1, 2, 3, 4, 6, 5}.

For the second test case,
Considering 0-based indexing we have M = 2 so the
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {10, 9, 8, 6, 7}.
Sample Input 2:
2
7 3
1 4 5 6 6 7 7
9 3
10 4 5 2 3 6 1 3 6
Sample Output 2:
 1 4 5 6 7 7 6
 10 4 5 2 6 3 1 6 3
 */

#include <iostream>
using namespace std;

void reverse_array(int arr[], int n, int m)
{
    int j = n - 1;
    int temp;
    for (int i = m + 1; i <= j; i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        // swap(arr[i], arr[j]);
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, m;
    int arr[20];
    cin >> n >> m; // size of the array >> position
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverse_array(arr, n, m);

    return 0;
}