class Solution 
{
    public:
    bool isSubsequence(string s, string t) 
    {
        int k=0;
        for(int i=0; i<s.size(); i++)
        {
            bool b = 0;
            for(int j=k; j<t.size(); j++)
            {
                if(s[i] == t[j])
                {
                    k = j+1;
                    b = 1;
                    break;
                }
            }
            
            if(!b)
            {
                return false;
            }
        }
        
        return true;
    }
};