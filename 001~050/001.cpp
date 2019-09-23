#include <iostream>
#include <vector>
#include <map>

using namespace std;

#ifdef SOLUTION_1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    r.push_back(i);
                    r.push_back(j);
                }
            }
        }
        return r;
    }
};
#endif

#ifdef SOLUTION_2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;
        map<int, int> nums_map;
        for (int i = 0; i < nums.size(); i++) {
            if ((nums_map.find(nums[i]) != nums_map.end())
                    && (nums[i] * 2 == target)) {
                r.push_back(nums_map[nums[i]]);
                r.push_back(i);
                return r;
            } else if ((nums_map.find(target - nums[i]) != nums_map.end())
                    && (target - nums[i] !=  nums[i])) {
                r.push_back(nums_map[target - nums[i]]);
                r.push_back(i);
                return r;
            } else {
                nums_map[nums[i]] = i;
            }
        }
    }
};
#endif

int main(int argc, char* argv[]) {
    Solution s; {
        vector<int> nums = {1, 2, 3, 4, 5};
        int target = 9;
        vector<int> r = s.twoSum(nums, target);
        cout << "r: " << r[0] << ", " << r[1] << endl;
    }; {
        vector<int> nums = {2, 3, 5, 7, 11};
        int target = 9;
        vector<int> r = s.twoSum(nums, target);
        cout << "r: " << r[0] << ", " << r[1] << endl;
    };
}
