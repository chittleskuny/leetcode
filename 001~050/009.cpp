#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

#ifdef SOLUTION_1
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }
        int y = 0;
        while (x > y) {
            y = y * 10 + x % 10;
            x = x / 10;
        }
        return (x == y) || (x == y / 10);
    }
};
#endif

#ifdef SOLUTION_2
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        vector<int> r;
        while (x != 0) {
            r.push_back(x % 10);
            x = x / 10;
        }
        for (int i = 0; i < r.size(); i++) {
            if (r[i] != r[r.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
#endif

#ifdef SOLUTION_3
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        for (int i = 0; i < s.size() / 2; i++) {
            if (s[i] != s[s.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
#endif

int main(int argc, char* argv[]) {
    Solution s; {
        int x = 1;
        bool r = s.isPalindrome(x);
        cout << x << " " << r << endl;
    }; {
        int x = 12;
        bool r = s.isPalindrome(x);
        cout << x << " " << r << endl;
    }; {
        int x = 121;
        bool r = s.isPalindrome(x);
        cout << x << " " << r << endl;
    }; {
        int x = 1221;
        bool r = s.isPalindrome(x);
        cout << x << " " << r << endl;
    };
}
