// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int ans=INT_MIN;
//         int n=nums.size();
//         for(int i=0;i<=n-k;i++)
//         {
//             int sum=0;
//             for(int j=i;j<i+k;j++)
//             {
//                 sum+=nums[j];
//             }
//             ans=max(ans,sum);
//         }
//         return (ans/(k*1.0));

        
        
//     }
// };





class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int sum=0;
        for(int j=0;j<k;j++)
        {
            sum+=nums[j];
        }
        int maxx=sum;
        for(int j=k;j<nums.size();j++)
        {
            sum=sum-nums[i]+nums[j];
            maxx=max(maxx,sum);
            i++;
        }
        return (maxx/(k*1.0));
        
    }
};