class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()==0) return true;
       
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
                continue;
            }
            
            if(s[i]==')' && (st.empty()||st.top()!='(')){
                return false;
            }
            if(s[i]=='}' && (st.empty()||st.top()!='{')){
                return false;
            }
            if(s[i]==']' && (st.empty()||st.top()!='[')){
                return false;
            }
            else{
                st.pop();
            }
           
        }
        if(st.empty()) return true; 
        return false;
    }
};