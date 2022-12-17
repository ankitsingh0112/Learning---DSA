#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0, i = 0;

    // Approach - 01
    /*
    while (n != 0)
    {
        int r = n % 2;
        ans = ((r * round(pow(10, i))) + ans);
        // cout << ans << endl;
        n = n/2;
        // cout << n << endl;
        i++;
    }
    */

    // Approach - 02
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * round(pow(10, i))) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans << endl;
    return 0;
}