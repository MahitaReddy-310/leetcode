class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> nums1;
        for(auto a:nums)
        {
            if(nums1.count(a)==1)
            {
                return true;
            }
            nums1.insert(a);

        }
        return false;
        
    }
};