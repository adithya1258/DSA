class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        string temp="";
        for(int i=0;i<n;i++){
            temp.push_back('.');
        }
        ans.push_back(temp);

        for(int i=1;i<m;i++){
            string temp2="";
            for(int j=0;j<n;j++){
                if(j==n-1){
                    temp2.push_back('.');
                    continue;
                }
                temp2.push_back('#');
                
            }
            ans.push_back(temp2);
        }

        return ans;
    }
};