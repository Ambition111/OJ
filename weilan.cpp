#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, h;
    cin >> n >> m >> h;
    vector<int> height(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> height[i];

    int res = 1;
    int mm = m;
    for (int i = 0; i < n; ++i)
    {
        if (height[i] <= h)
        {
            res = i + 1;
            mm--;
        }
        else
            mm = m;

        if (mm == 0)
        {
            res = res - m + 1;
            cout << res << endl;
            return 0;
        }

    }
    if (mm)
    {
        cout << -1 << endl;
        return 0;
    }

    return 0;
}
