/*

You are given two array 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing
order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occuring in both the arrays.

Sample Input 1 :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4
Sample Output 1 :
2 2 3
3
Explanation For Sample Input 1 :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.
Sample Input 2 :
2
3 3
1 4 5
3 4 5
1 1
3
6
Sample Output 2 :
4 5
-1

*/

#include <iostream>
#include<climits>
using namespace std;


// though this logic is working but this is not an optimized solution....

// void intersection(int arr1[], int arr2[], int n, int m)
// {
//     int intersection[10];
//     int k = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 intersection[k++] = arr1[i];
//                 /*
//                 // this will work but not a good approach...

//                 for (int l = i; l < n; l++)
//                 {
//                     arr1[l] = arr1[l + 1];
//                 }
//                 for (int l = j; l < m; l++)
//                 {
//                     arr2[l] = arr2[l + 1];
//                 }
//                 n--;
//                 m--;
//                 i--;
//                 j--;
//                 */
//                // instead of deleting the elements we can replace that element with INT_MIN or INT_MAX...
//                arr2[j] = INT_MIN;
//                break;
//             }
//         }
//     }
//     for (int i = 0; i < k; i++)
//         cout << intersection[i] << " ";
// }

// now lets see the optimized solution (by love babbar):-
void intersection(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    int intersection[10];
    int k = 0;
    while(i < n && j < m)
    {
        if(arr1[i] == arr2[j])
        {
            intersection[k++] = arr1[i];
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (int i = 0; i < k; i++)
        cout << intersection[i] << " ";
}

int main()
{
    int arr1[10], arr2[10];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    intersection(arr1, arr2, n, m);
}