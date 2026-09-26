class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans;

        unordered_map<string,string> mpp;
        for(int i=0;i<knowledge.size();i++){
            mpp[knowledge[i][0]]=knowledge[i][1];
        }

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                string brc;
                i++;

                while(s[i]!=')'){
                    brc.push_back(s[i]);
                    i++;
                }
                
                string val=mpp[brc];
                if(mpp[brc].size()==0){
                    ans.push_back('?');
                    continue;
                }
                for(int j=0;j<val.size();j++){
                    ans.push_back(val[j]);
                }
            }
            else{
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};