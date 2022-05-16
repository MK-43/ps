#include <iostream>
#include <fstream>
using namespace std;

int N;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    int a, b;
    cin >> a >> b;

    if (a == b)
        cout << "==";
    else if (a > b)
        cout << ">";
    else
        cout << "<";
    return 0;
}