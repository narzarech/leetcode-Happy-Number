#include <iostream>
#include <set>
#include <map>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = getSum(getSum(n));
        while (slow != fast) {
            slow = getSum(slow);
            fast = getSum(getSum(fast));
        }
        if (fast == 1) {
            return true;
        }
        else {
            return false;
        }
    }
    int getSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
};
int main() {
    int n; cin >> n;
    Solution sol;
    cout << sol.isHappy(n);
}