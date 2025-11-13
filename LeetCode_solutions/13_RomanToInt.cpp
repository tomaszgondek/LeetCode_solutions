#include <string>
using namespace std;

class Solution {
public:
    int toDecimal(char c)
    {
        if (c == 'I') return 1;
        else if (c == 'V') return 5;
        else if (c == 'X') return 10;
        else if (c == 'L') return 50;
        else if (c == 'C') return 100;
        else if (c == 'D') return 500;
        else if (c == 'M') return 1000;
        else return 0;
    }

    int romanToInt(string s)
    {
        if (s.size() == 1) return toDecimal(s[0]);
        int ans = 0;
        for (int i = 0; i < s.size();)
        {
            if (i + 1 < s.size())
            {
                if (s[i] == 'I' && s[i + 1] == 'V') { ans += 4;   i += 2; }
                else if (s[i] == 'I' && s[i + 1] == 'X') { ans += 9;   i += 2; }
                else if (s[i] == 'X' && s[i + 1] == 'L') { ans += 40;  i += 2; }
                else if (s[i] == 'X' && s[i + 1] == 'C') { ans += 90;  i += 2; }
                else if (s[i] == 'C' && s[i + 1] == 'D') { ans += 400; i += 2; }
                else if (s[i] == 'C' && s[i + 1] == 'M') { ans += 900; i += 2; }
                else
                {
                    ans += toDecimal(s[i]);
                    i += 1;
                }
            }
            else
            {
                ans += toDecimal(s[i]);
                i += 1;
            }
        }
        return ans;
    }
};
