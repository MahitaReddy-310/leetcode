class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        
        while (left < right) {
            int current_sum = numbers[left] + numbers[right];
            
            if (current_sum == target) {
                return {left + 1, right + 1}; // 1-indexed output
            } 
            else if (current_sum < target) {
                left++; // Sum is too small, move left pointer right
            } 
            else {
                right--; // Sum is too big, move right pointer left
            }
        }
        return {};
    }
};