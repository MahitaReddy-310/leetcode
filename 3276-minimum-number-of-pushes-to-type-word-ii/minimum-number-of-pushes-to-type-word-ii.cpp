class Solution {
public:
    int minimumPushes(string word) {
         vector<int> freq(26,0);
         int n=word.size();
         for(char c:word)
         {
            freq[c-'a']++;
         }
         sort(freq.rbegin(),freq.rend());
         int pushes=0;
         for(int i=0;i<26;i++)
         {
               if(i<8) pushes+=freq[i]*1;   
               else if(i<16) pushes+=freq[i]*2;
               else if(i<24) pushes+=freq[i]*3;
               else pushes+=freq[i]*4;
         } 
        return pushes;
    }
};