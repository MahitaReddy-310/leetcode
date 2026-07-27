class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mymap;
        int n=names.size();
        vector<string> ans;
        for(int i=0;i<n;i++)
        {
            mymap[heights[i]]=names[i];
        }
        //{165:"john",170:"Emma",180:"mary"}
        for(auto a:mymap)
        {
            ans.push_back(a.second);
        }
        //{john,emma,mary}
        reverse(ans.begin(),ans.end());


        return ans;




        
    }
};