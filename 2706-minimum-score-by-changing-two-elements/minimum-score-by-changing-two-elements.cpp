class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int ans=0;

        sort(nums.begin(),nums.end());

        if(nums.size()==3){
            return ans;
        }

        int first=nums[2];
        int second=nums[nums.size()-3];

        ans=min((nums[nums.size()-1]-first),(second-nums[0]));
        ans=min(ans,(nums[nums.size()-2]-nums[1]));

        return ans;
    }
};