class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int minn=INT_MAX;
        for(int x:nums)
        {
            
            int sum=0;
            while(x!=0)
            {
            
                sum+=x%10;
                x/=10;
            }
            minn=min(minn,sum);

        }
        return minn;
        
    }
};