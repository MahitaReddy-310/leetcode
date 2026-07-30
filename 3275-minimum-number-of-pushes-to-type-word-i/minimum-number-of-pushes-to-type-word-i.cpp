class Solution {
public:
    int minimumPushes(string word) {
        int pushes=0;
        for(int i=0;i<word.size();i++)
        {
            if(i<8)
            {
                pushes+=1;
            }
            else if(i<16)
            pushes+=2;
            else if(i<24)
            pushes+=3;
            else
            pushes+=4;
        }
        return pushes;
        



        
    }
};