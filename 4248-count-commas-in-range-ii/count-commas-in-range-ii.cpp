class Solution {
public:
    long long countCommas(long long n) {
        long long num=n;
        long long cnt=-1;
        while(num!=0){
            cnt++;
            num=num/10;
        }

        long long ans=0;

        if(cnt<=2){
            return 0;
        }
        if(cnt<=5 && cnt>=3){
            ans=ans+(n-1000+1);
        }
        else if(cnt>5){
            ans=ans+(1000000-1000);
        }

        if(cnt<=8 && cnt>=6){
            ans=ans+(n-1000000+1)*2;
        }
        else if(cnt>8){
            ans=ans+(1000000000-1000000)*2;
        }

        if(cnt<=11 && cnt>=9){
            ans=ans+(n-1000000000+1)*3;
        }
        else if(cnt>11){
            ans=ans+(1000000000000-1000000000)*3;
        }

        if(cnt<=14 && cnt>=12){
            ans=ans+(n-1000000000000+1)*4;
        }
        else if(cnt>14){
            ans=ans+(1000000000000000-1000000000000)*4;
        }

        if(cnt==15){
            ans=ans+(n-1000000000000000+1)*5;
        }

        return ans;
    }
};