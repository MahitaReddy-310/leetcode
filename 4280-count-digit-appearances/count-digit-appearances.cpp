class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) 
    {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int x=nums[i];
            while(x!=0)
                {
                    if(x%10==digit)
                    count++;
                    x/=10;
                }
            
        }
        return count;
        
    }
};