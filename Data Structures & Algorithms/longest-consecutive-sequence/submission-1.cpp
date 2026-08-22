class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int ans=1;
        int k=1;
        for(auto x:s){
            if(s.find(x+1)==s.end()){
                ans=max(ans,k);
                k=0;
            }
            k++;
        }
        return ans;
    }
};
