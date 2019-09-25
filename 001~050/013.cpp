#include <iostream>
#include <cstring>

using namespace std;

#ifdef SOLUTION_1
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int pre = 0;
        for (auto i = s.begin(); i != s.end(); i++) {
            if (*i == 'I') {
                if (0 < pre && pre < 1) {
                    sum += 1;
                    pre = 0;
                } else {
                    sum += pre;
                    pre = 1;
                }
            } else if (*i == 'V') {
                if (0 < pre && pre < 5) {
                    sum += 5 - pre;
                    pre = 0;
                } else {
                    sum += pre;
                    pre = 5;
                }
            } else if (*i == 'X') {
                if (0 < pre && pre < 10) {
                    sum += 10 - pre;
                    pre = 0;
                } else {
                    sum += pre;
                    pre = 10;
                }
            } else if (*i == 'L') {
                if (0 < pre && pre < 50) {
                    sum += 50 - pre;
                    pre = 0;
                } else {
                    sum += pre;
                    pre = 50;
                }
            } else if (*i == 'C') {
                if (0 < pre && pre < 100) {
                    sum += 100 - pre;
                    pre = 0;
                } else {
                    sum += pre;
                    pre = 100;
                }
            } else if (*i == 'D') {
                if (0 < pre && pre < 500) {
                    sum += 500 - pre;
                    pre = 0;
                } else {
                    sum += pre;
                    pre = 500;
                }
            } else if (*i == 'M') {
                if (0 < pre && pre < 1000) {
                    sum += 1000 - pre;
                    pre = 0;
                } else {
                    sum += pre;
                    pre = 1000;
                }
            } else {
                return -1;
            }
        }
        return sum + pre;
    }
};
#endif

int main(int argc, char* argv[]) {
    Solution s; {
        string ss("I");
        int r = s.romanToInt(ss);
        cout << ss << " " << r << endl;
    }; {
        string ss("II");
        int r = s.romanToInt(ss);
        cout << ss << " " << r << endl;
    }; {
        string ss("V");
        int r = s.romanToInt(ss);
        cout << ss << " " << r << endl;
    }; {
        string ss("VIII");
        int r = s.romanToInt(ss);
        cout << ss << " " << r << endl;
    }; {
        string ss("X");
        int r = s.romanToInt(ss);
        cout << ss << " " << r << endl;
    };
}
