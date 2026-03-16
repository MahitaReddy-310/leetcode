class Solution {
public:
    int maximumCount(vector<int>& nums) {
       int pos=0, neg=0;

       for(auto a:nums)
       {
        if(a > 0)
        pos++;

        else if(a < 0)
        neg++;
       }
       if(pos>neg)
       {
        return pos;
       }
       return neg;

       
    }
};
        
