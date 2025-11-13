#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            auto it = seen.find(need);
            if (it != seen.end()) return { it->second, i };
            seen.emplace(nums[i], i);
        }
        return {};
    }
};