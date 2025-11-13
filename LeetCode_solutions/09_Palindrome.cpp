#include <string>

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0) return 0;
        std::string arr = std::to_string(x);
        int size = arr.size();
        int last_index = size - 1;
        for (int i = 0; i < size / 2; i++)
        {
            if (arr[i] != arr[last_index - i])
            {
                return 0;
            }
            else
            {
                continue;
            }
        }
        return 1;
    }
};