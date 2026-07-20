class Solution {
public:
    bool checkIfPangram(string sentence) {
    bool arr[26]={false};
    int n=sentence.size();
    for(int i=0;i<n;i++)
    {
        arr[sentence[i] -'a' ]=true;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==false)
        {
            return false;
        }
    }
    return true;
        
    }
};