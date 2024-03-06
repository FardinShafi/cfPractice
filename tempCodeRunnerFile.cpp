#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> groups(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> groups[i];
    }

    sort(groups.begin(), groups.end());
    int L = groups[0], SUM = 0, count = 0;
    for (int i = 0; i < groups.size(); i++)
    {
        if (groups[i] + SUM <= 4)
        {
            SUM = SUM + groups[i];
        }
        if (groups[i] + SUM > 4)
        {
            count++;
            SUM = 0;
        }
    }

    cout << count << endl;

    return 0;
}