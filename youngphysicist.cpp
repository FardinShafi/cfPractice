#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    string verdict(){
        int n;
        cin >> n; 
        vector<vector<int>> vectors(n, vector<int>(3)); 
        
        for (int i = 0; i < n; ++i) {
            cin >> vectors[i][0] >> vectors[i][1] >> vectors[i][2];
        }

        int sumX = 0, sumY = 0, sumZ = 0;
        for (const auto& v : vectors) {
            sumX += v[0];
            sumY += v[1];
            sumZ += v[2];
        }

        if (sumX == 0 && sumY == 0 && sumZ == 0) {
            return "YES";
        } else {
            return "NO"; 
        }
    }
};
int main(int argc, char const *argv[]){

    Solution s;
    cout<<s.verdict()<<endl;

    return 0;
}
