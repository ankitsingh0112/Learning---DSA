// Print all the subsequence of the given string

#include <bits/stdc++.h>
using namespace std;

int subsequence(string input, string output[])
{
    if (input.empty())
    {
        output[0] = " ";
        return 1;
    }
    string smallString = input.substr(1); // 1st index ke element ko chor kr bakki pr recursion kr do
    int smallOutputSize = subsequence(smallString, output);
    /*
suppose input = "abc"

| ""
| b
| c
| bc

phele to ye chaar subsequence return honge uske baad in charo ke aange me hm bacha hua element ko add kr denge

| a""
| ab
| ac
| abc
*/
    for (int i = 0; i < smallOutputSize; i++)
    {
        output[i + smallOutputSize] = input[0] + output[i];
    }
    return 2 * smallOutputSize;
}

int main()
{
    string input;
    cin >> input;
    string output[1000];
    int count = subsequence(input, output);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}