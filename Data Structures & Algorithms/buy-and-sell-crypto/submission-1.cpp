class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int temp=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<temp){
                temp=prices[i];
            }
            ans=max(ans,prices[i]-temp);
        }
        return ans;
    }
};
