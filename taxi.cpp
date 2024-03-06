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
    int count = 0;
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int total = groups[right];
        while (left < right && total + groups[left] <= 4)
        {
            total += groups[left];
            left++;
        }
        right--;
        count++;
    }

    cout << count << endl;

    return 0;
}
