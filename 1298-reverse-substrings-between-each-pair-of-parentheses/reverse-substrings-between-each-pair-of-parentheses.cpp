class Solution {
public:
    string pairs(int &i,string &s){
        string sub;

        for(;i<s.size();i++){
            if(s[i]=='('){
                string temp=pairs(++i,s);
                sub=sub+temp;
            }
            else if(s[i]==')'){
                reverse(sub.begin(),sub.end());
                return sub;
            }
            else{
                sub.push_back(s[i]);
            }
        }
        return sub;
    }
    string reverseParentheses(string s) {
        string ans;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                string temp=pairs(++i,s);
                ans=ans+temp;
            }
            else if(s[i]==')'){
                reverse(ans.begin(),ans.end());
                return ans;
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    
    }
};