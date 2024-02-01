#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int results[100];
    int count =0;
    while (t--)
    {
        int n;
        cin >> n;
        int mn1 = 0, mx1 = 0, mn2 = 0, mx2 = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            mn1 = min(mn1, a);
            mx1 = max(mx1, a);
            mn2 = min(mn2, b);
            mx2 = max(mx2, b);
        }
        results[count] = abs(mn1) * 2 + mx1 * 2 + abs(mn2) * 2 + mx2 * 2;
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        cout<<results[i]<<endl;
    }
    

    return 0;
}
