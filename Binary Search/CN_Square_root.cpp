/*
You are given a positive integer 'N'. Your task is to find and return its square root. If 'N' is not a perfect square, the return the floor value of sqrt(N).

for example :

for 'N' = 25, return 5, for 'N' = 20, return 4, for 'N' = 2 return 1.

Sample Input 1:
2
4
6
Sample Output 1:
2
2
Explanation Of Sample Input 1:
In the first test case, the square root of the given number 4 is 2.

In the second test case, the square root of the given number 6 lies between 2 and 3, so the floor value is 2.
Sample Input 2:
2
10
100
Sample Output 2:
3
10
Explanation Of Sample Output 2:
In the first test case, the square root of the given number 10 lies between 3 and 4, so the floor value is 3.

In the second test case, the square root of the given number 100 is 10.
*/

#include <iostream>
using namespace std;

int sqrtN(long int N)
{
    int s = 0, e = N / 2;
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (m * m == N || (m * m < N && (m + 1) * (m + 1) > N))
            return m;
        else if(m * m < N)
            s = m + 1;
        else
            e = m - 1;
    }
    return -1;
}

int main()
{
    long int N;
    cin >> N;
    int sq_root = sqrtN(N);
    cout << "Sqaure root of : " << N << " = " << sq_root << endl;
    return 0;
}