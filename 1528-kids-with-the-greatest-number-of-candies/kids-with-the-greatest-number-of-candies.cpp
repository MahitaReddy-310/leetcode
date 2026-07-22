class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(maxx < candies[i])
            {
                maxx=candies[i];
            }
        }
        vector<bool> result;
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxx)
            {
                result.push_back(true);
            }
            else
            result.push_back(false);

        }
        return result;




        
    }
};