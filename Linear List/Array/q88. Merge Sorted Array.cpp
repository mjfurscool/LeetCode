#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m); //only first m elements are used
        nums2.resize(n);
        nums1.insert(nums1.end(), nums2.begin(), nums2.end()); //** use of insert
        sort(nums1.begin(), nums1.end());
    }
};