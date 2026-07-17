class Solution {
public:
    int minimumChairs(string s) {
        int chair=0;
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
            chair=max(chair,curr);
        }
        return chair;
        
    }
};