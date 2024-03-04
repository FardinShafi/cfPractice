#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    string chatroom(string s)
    {
        string x = "hello";
        int index = 0;

        for (char c : s)
        {
            if (c == x[index])
            {
                index++;
            }

            if (index == x.length())
            {
                return "YES";
            }
        }
        return "NO";
    }
};

int main()
{
    Solution solution;
    string s;
    cin >> s;
    cout << solution.chatroom(s) << endl;

    return 0;
}
