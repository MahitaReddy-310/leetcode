class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1,mid,minn=INT_MAX;
        while(l<=r)
        {
            
            mid=l+((r-l)/2);
            minn=min(nums[mid],minn);
            if(nums[r]<nums[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
                
            }
        }
        return minn;


        
    }
};