class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        

        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int digitsum=0;
            while(num>0){
                int digit=num%10;
                num=num/10;

                digitsum=digitsum+digit;
            }

            if(digitsum==i){
                return i;
            }
        }

        return -1;
    }
};