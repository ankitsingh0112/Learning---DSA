#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0, i = 0;
    while(n != 0)
    {
        int bit = n & 1;
        if(bit == 1)
        {
            ans = round(pow(2, i)) + ans;
        }
        n = n >> 1;
        i++;
    }
    cout << ans << endl;
    return 0;
}