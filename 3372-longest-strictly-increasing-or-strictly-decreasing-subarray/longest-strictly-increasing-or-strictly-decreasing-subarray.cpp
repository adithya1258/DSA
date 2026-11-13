class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        vector<int> inc(nums.size(),1);
        vector<int>dec(nums.size(),1);

        int ans=1;
        int n=nums.size();

        if(nums.size()==1){
            return ans;
        }

        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                inc[i]=1+inc[i+1];
                ans=max(ans,inc[i]);
            }
        }

        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                dec[i]=1+dec[i-1];
                ans=max(ans,dec[i]);
            }
        }

        return ans;
    }
};