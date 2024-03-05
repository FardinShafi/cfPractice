#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> heights[i];
    }

    int sum = 0, minSum = INT_MAX, minIndex = 0;
    for (int i = 0; i < k; ++i)
    {
        sum += heights[i];
    }
    minSum = sum;
    for (int i = k; i < n; ++i)
    {
        sum += heights[i] - heights[i - k];
        if (sum < minSum)
        {
            minSum = sum;
            minIndex = i - k + 1;
        }
    }

    cout << minIndex + 1 << endl;

    return 0;
}
