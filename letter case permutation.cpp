class Solution {
public:
    void helper(const string str,string osf,vector<string> &v)
    {
        if(str.length()==0)
        {
            v.push_back(osf);
            return;
        }
        
        char ch = str[0];
        string ros = str.substr(1);
        if(ch>='a' and ch <='z') {
            helper(ros,osf+ch,v);
            helper(ros,osf+((char)(ch-32)),v);
            
        } else if(ch>='a' and ch<='Z'){
            helper(ros,osf+ch,v);
            helper(ros,osf+((char)(ch+32)),v);
        
        } else {
            helper(ros,osf+ch,v);
        }
    }
    vector<string> letterCasePermutation(string S,string osf="") {
        vector<string> v;
        helper(S,"",v);
        return v;
    }
};
