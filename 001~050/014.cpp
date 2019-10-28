#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

#ifdef SOLUTION_1
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }
        auto benchmark = strs.begin();
        int prefix_length = benchmark->size();
        auto str = strs.begin();
        for (str++; str != strs.end(); str++) {
            if (prefix_length > str->size()) {
                prefix_length = str->size();
            }
            for (int i = prefix_length - 1; i >=0; i--) {
                if ( (*benchmark)[i] != (*str)[i] ) {
                    prefix_length = i;
                }
            }
        }
        return benchmark->substr(0, prefix_length);
    }
};
#endif

int main(int argc, char* argv[]) {
    Solution s; {
        vector<string> strs;
        string ss_1("flower");
        string ss_2("flow");
        string ss_3("flight");
        strs.push_back(ss_1);
        strs.push_back(ss_2);
        strs.push_back(ss_3);
        string r = s.longestCommonPrefix(strs);
        cout << r << endl;
    }; {
        vector<string> strs;
        string ss_1("dog");
        string ss_2("racecar");
        string ss_3("car");
        strs.push_back(ss_1);
        strs.push_back(ss_2);
        strs.push_back(ss_3);
        string r = s.longestCommonPrefix(strs);
        cout << r << endl;
    };
}
