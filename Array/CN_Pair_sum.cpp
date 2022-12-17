/*

You are given an integer array 'ARR' of size 'N' and an

Sample Input 1:
5 5
1 2 3 4 5
Sample Output 1:
1 4
2 3
Explaination For Sample Output 1:
Here, 1 + 4 = 5
      2 + 3 = 5
Hence the output will be, (1,4) , (2,3).
Sample Input 2:
5 0
2 -3 3 3 -2
Sample Output 2:
-3 3
-3 3
-2 2
*/

#include<iostream>
using namespace std;

void find_sum(int arr[], int size, int target){
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] + arr[j] == target)
                cout << arr[i] << " + " <<arr[j] << " = "<< target <<endl;
        }
    }
}

int main()
{
    int arr[10], size, target;
    cin >> size;
    for(int i = 0; i <size; i++)
        cin >> arr[i];
    cin >> target;
    find_sum(arr, size, target);
    return 0;
}