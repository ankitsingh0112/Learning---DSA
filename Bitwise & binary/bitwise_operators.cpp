#include<iostream>
using namespace std;

int main()
{
    int a = 6;
    int b = 4;
    // Bitwise AND :
    cout << "a & b : " << (a&b) << endl;

    // Bitwise OR :
    cout << "a | b : " << (a|b) << endl;

    // Bitwise NOT :
    // to convert the number into negative
    cout << "~a + 1 : " << (~a + 1) << endl;
    // how NOT operator works
    cout << "~a : " << ~a << endl;

    //Bitwise XOR :
    cout << "a ^ b : " << (a^b) << endl;

    // Left shift (<<) :
    cout << "a << 2 : " << (a << 2) << endl;

    // Right shift (>>) :
    cout << "a >> 2 : " << (a >> 2) << endl;
    return 0;
}