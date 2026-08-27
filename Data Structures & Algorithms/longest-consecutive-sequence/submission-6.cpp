class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        unordered_set<int>s(nums.begin(),nums.end());
        int ans=0;
        for(auto &x:s){
            if(s.find(x-1)==s.end()){
                int count=1;
                int n=x;
                while(s.find(n+1)!=s.end()){
                    count++;
                    n++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};
