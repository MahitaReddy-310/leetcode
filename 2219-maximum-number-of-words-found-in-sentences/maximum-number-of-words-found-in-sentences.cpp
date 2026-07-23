class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxx=0;
        for(int i=0;i<sentences.size();i++)
        {
            int space_count=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j] ==' ')
                space_count++;
            }
            int words=space_count+1;
            maxx=max(maxx,words);

        }
        return maxx;
        
    }
};