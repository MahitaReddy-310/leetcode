class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        int count=0;
        for(auto a:nums)
        {
            count+=freq[a];
            freq[a]++;
        }
        return count;
        
    }
};