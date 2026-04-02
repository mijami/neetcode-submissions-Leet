class Solution {
public:

    string encode(vector<string>& strs) {
        string a="";
        for(int i=0;i<strs.size();i++)
        {
            
            a+=strs[i];
            
            a+="bata";
            
        }
        return a;
    }

    vector<string> decode(string s) {
        vector<string>vec;
        string a="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b' && s[i+1]=='a' && s[i+2]=='t'&& s[i+3]=='a' && i+3<s.size())
            {
                vec.push_back(a);
                a="";
                i+=3;
            }
            else
            {
                a+=s[i];
            }
        }
        return vec;
    }
};
