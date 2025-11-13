#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        for (int i = 1; i < strs.size(); i++)
        {
            for (int j = 0; j < strs[0].size() && j < strs[i].size(); j++)
            {
                if (strs[0][j] == strs[i][j])
                {
                    continue;
                }
                else
                {
                    strs[0] = strs[0].substr(0, j);
                    break;
                }
            }
            if (strs[0].size() > strs[i].size()) strs[0] = strs[0].substr(0, strs[i].size());
            if (strs[0].empty()) return "";
        }

        return strs[0];
    }
};

