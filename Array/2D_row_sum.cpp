// Row and col wise sum :-


#include<iostream>
using namespace std;


void find_row_sum(int arr[][3], int n, int m)
// it is necessory to add the size of col of the matrix(2D-array) to call a function
// for detail explaination : https://stackoverflow.com/questions/12813494/why-do-we-need-to-specify-the-column-size-when-passing-a-2d-array-as-a-parameter
{
    for(int row = 0; row < 3; row++)
    {
        int sum = 0;
        for(int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << "Sum of row - " << row+1 << " = " << sum << endl;
    }
}

void find_col_sum(int arr[][3], int n, int m)
{
    for(int col = 0; col < n; col++)
    {
        int sum = 0;
        for(int row = 0; row < m; row++)
        {
            sum = sum + arr[row][col];
        }
        cout << "Sum of col - " << col+1 << " = " << sum << endl;
    }
}

int main()
{
    int arr[3][3];
    int sum;
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    find_row_sum(arr, 3, 3);
    // find_col_sum(arr, 3, 3);
    
    return 0;
}