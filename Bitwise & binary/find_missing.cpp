#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(7);
    arr.push_back(5);
    arr.push_back(4);

    // sorting the array
    sort(arr.begin(), arr.end());
    for(int i = 0; i < 7; i++)
    {
        if(arr[i] != i+1)
        {
            cout << i+1 << endl;
            break;
        }
    }
}