class Solution {
public:
    int minimumChairs(string s) {
        int maxx=0;
        int curr=0;
        for(auto x:s)
        {
            if(x=='E')
            {
                curr++;
            }
            else
            {
                curr--;
            }
            maxx=max(maxx,curr);
        }
        return maxx;
        
    }
};