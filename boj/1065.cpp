#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int N;

int main()
{
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
#endif
    cin >> N;

    int ans = 0;
    for (int i = 1; i <= N; ++i)
    {
        if (i < 100)
        {
            ans++;
            continue;
        }

        int v = i;
        int prev = v % 10;
        v /= 10;
        int diff = v % 10 - prev;
        prev = v % 10;
        v /= 10;
        int found = true;
        while (v)
        {
            int cur = v % 10;
            if (cur - prev != diff)
            {
                found = false;
                break;
            }
            prev = cur;
            v /= 10;
        }

        if (found)
            ans++;
    }
    cout << ans << endl;
    return 0;
}