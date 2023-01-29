// Print 1 to N using backtracking

#include<iostream>
using namespace std;

void print(int i, int n)
{
    if(i < 1)
        return;
    print(i-1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    print(n, n);
}