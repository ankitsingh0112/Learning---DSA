/*
-> What is Pivot?
=> The central point on which something turns or balances means that point from where the value changes...

lets take a example :

arr[] = {7, 9, 1, 2, 3};

In the given array we can see that the first two elements are sorted and last three 
elements are sorted so here the pivot point will be index 2 (value = 1) bcoz from that 
point the arrangements of the array is changing...

So, to find the pivot point we can apply the binary search :

(This will help in finding the key(element) in rotated sorted array questions...)


One more definition :

-> What is Pivot Index?
=> The pivot index can be defined as the index where the sum of the numbers to the left of the index is equal to the sum of the numbers to the right of the index.

example : nums = [1,7,3,6,5,6]
Here, The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11

So, to find the pivot index we can apply the following logic :

int sum = 0, leftsum = 0;
loop(0-(size-1))
    sum = sum + nums[i];
loop(0-(size-1))
{
    if(leftsum == sum - leftsum - nums[i])
        return i;
    leftsum = leftsum + nums[i];
}

*/
#include<iostream> 
using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main() {
    int arr[5] = {8, 10, 17, 1, 3};
    cout << "Pivot is " << getPivot(arr, 5) << endl;
}