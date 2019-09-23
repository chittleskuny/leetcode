#include <iostream>
#include <vector>

using namespace std;

#ifdef SOLUTION_1
class Solution {
public:
    int reverse(int x) {
        int r = 0;
        int xx = 0;
        if (x < 0) {
            xx = 0 - x;
        } else {
            xx = x;
        }
        int i = 0;
        int max = 2147483647;
        while (xx != 0) {
            i = xx % 10;
            xx = xx / 10;
            if (x < 0 && r > (max - i) / 10) {
                return 0;
            } else if (x > 0 && r > (max - i - 1) / 10) {
                return 0;
            }
            r = r * 10 + i;
        }
        if (x < 0) {
            r = 0 - r;
        }
        return r;
    }
};
#endif

int main(int argc, char* argv[]) {
    Solution s; {
        int r = s.reverse(1);
        cout << "1 -> " << r << endl;
    }; {
        int r = s.reverse(123);
        cout << "123 -> " << r << endl;
    };
}
