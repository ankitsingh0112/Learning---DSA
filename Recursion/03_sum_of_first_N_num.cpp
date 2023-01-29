// Sum pf first N number using recursion

#include<iostream>
using namespace std;

// Approach - 01 :-
/*
void sum(int i, int add)
{
    if(i < 1)
    {
        cout << add;
        return;
    }
    sum(i-1, add+i);
}

int main()
{
    int n;
    cin >> n;
    sum(n, 0);
}
*/
// Approach - 02 :-

#include<iostream>
using namespace std;

int sum(int n)
{
    if(n == 0)
        return 0;
    return n + sum(n-1);
}

int main()
{
    int n;
    cin >> n;
    int s = sum (n);
    cout << s << endl;
}