class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> count;
        vector<int> ans;
        
        for (auto a : nums) {
            count[a]++;
            
            if (count[a] == 2) {
                ans.push_back(a); 
            }
        }
        return ans;
    }
};
