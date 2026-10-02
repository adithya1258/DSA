class Solution {
public:
    void form(vector<string> &str,int n,int open,int close,string temp){
        if(temp.size()==2*n){
            str.push_back(temp);
            return;
        }
        if(open<n){
            form(str,n,open+1,close,temp+"(");
        }
        if(close<open){
            form(str,n,open,close+1,temp+")");
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> str;
        form(str,n,0,0,"");
        return str;
    }
};