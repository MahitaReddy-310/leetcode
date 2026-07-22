class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int m=accounts[0].size();
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int curr_val=0;
            for(int j=0;j<m;j++)
            {
                curr_val+=accounts[i][j];
            }
            maxx=max(maxx,curr_val);
        }
        return maxx;

        
    }
};