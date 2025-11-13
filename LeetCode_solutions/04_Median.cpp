#include <vector>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        std::vector<int> v(nums1.size() + nums2.size());
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), v.begin());
        if (v.size() % 2 == 0) return (v[v.size() / 2.0 - 1] + v[v.size() / 2.0]) / 2.0;
        else return v[v.size() / 2.0];
    }
};