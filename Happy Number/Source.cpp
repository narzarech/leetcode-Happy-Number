#include <iostream>
#include <set>
#include <map>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        set<int>dup = { n };
        pair<set<int>::iterator, bool>ret;
        while (n != 1) {
            int sum = 0;
            while (n > 0) {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            n = sum;
            ret = dup.insert(sum);
            if (ret.second == false) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    int n; cin >> n;
    Solution sol;
    cout << sol.isHappy(n);
}