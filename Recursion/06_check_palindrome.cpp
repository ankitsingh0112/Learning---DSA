// Check whether the given string is palindrome or not

#include<iostream>
#include<string>
using namespace std;

bool check_palindrome(int i, string str, int s) {
    if(i >= s/2)
        return true;
    if(str[i] != str[s-i-1])
        return false;
    else {
        check_palindrome(i+1, str, s);
    }
}

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    bool check = check_palindrome(0, s, size);
    if(check)
        cout << "true" <<endl;
    else
        cout << "false" << endl;
    return 0;
}