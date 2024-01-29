#include <iostream>
using namespace std;

int main()
{

    int arr[1000];
    int k, n, temp;

    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[i] = temp;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k-1] && arr[i] > 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}