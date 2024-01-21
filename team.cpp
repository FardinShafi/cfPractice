#include <iostream>
using namespace std;

int main()
{
    int a, x, y, z;
    int count = 0;
    cin >> a;

    for (int j = 0; j < a; j++)
    {
        cin >> x;
        cin >> y;
        cin >> z;
        if ((x == 1 && y == 1) || (y == 1 && z == 1) || (z == 1 && x == 1))
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}