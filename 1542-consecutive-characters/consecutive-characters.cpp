class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int res=1,curr=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
            curr++;
            else
            curr=1;

            res=max(res,curr);
        }
        return res;



        
    }
};