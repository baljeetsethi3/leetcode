class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int temp=0,count=0,recent=0;
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]==0 || m[s[i]]<=recent)
            {
                m[s[i]]=i+1;
                temp++;
            }
            else if(m[s[i]]!=0 && m[s[i]]>recent)
            {
                if(temp>count)
                    count=temp;
                temp=i-m[s[i]]+1;
                recent=m[s[i]];
                m[s[i]]=i+1;
                
            }
        }
        if(temp>count)
            count=temp;
        return(count);
    }
};