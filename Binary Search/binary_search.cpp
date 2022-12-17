// For binary search array must be sorted...

// Time complexity for binary search is O(log(n)(base2))...
// explanation :-
/*
    after first iteration, length of array : n
    after second iteration, length of array : n/2    
    after third iteration, length of array : n/4    
    after fourth iteration, length of array : n/8
    ...
    ...
    ...
    after Kth iteration, length of array : n/2^k    
*/
/*
    let the length of array become 1 after k iteration

    => n/2^k = 1
    => n = 2^k
    => log(n)(base2) = klog(2)(base2)
    => k = log(n)
*/

#include<iostream>
#define N 20
using namespace std;

int binary_search(int arr[], int key, int n);

int main()
{
    int arr[N], n, key;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"Input elements of the array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to find : ";
    cin>>key;
    int pos;
    pos = binary_search(arr, key, n);
    if(pos)
        cout<<"Key is at Index : "<< (pos)<<endl;
    else
        cout<<"Key is not present in the given array"<<endl;
    return 0;
}

int binary_search(int arr[], int key, int n){
    int l = 0, u = n-1, mid;    
    // for (; l<=u;)
    while(l<=u)
    {
        // mid = (l+u)/2;
        mid = l + (u-l)/2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if(key > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            u = mid - 1;
        }
    }
    return 0;
}