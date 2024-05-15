#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }

    int best = x[0];
    int worst = x[0];
    int count = 0;

    for (int i = 1; i < n; ++i)
    {
        if (x[i] > best)
        {
            count++;
            best = x[i];
        }
        else if (x[i] < worst)
        {
            count++;
            worst = x[i];
        }
    }

    cout << count << endl;

    return 0;
}
