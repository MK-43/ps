#include <iostream>
#include <fstream>
using namespace std;


int N;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin >> N;
    int v;
    int min = 1000001;
    int max = -1000001;
    for (int i = 0; i < N; ++i)
    {
        cin >> v;
        min = min < v ? min : v;
        max = max > v ? max : v;
    }

    cout << min << ' ' << max;

    return 0;
}