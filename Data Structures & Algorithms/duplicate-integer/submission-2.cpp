class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0)return false;
        sort(nums.begin(),nums.end());
        int a=nums[0];
        for(int i=1;i<nums.size();i++){
            if(a==nums[i]){
                return true;
            }
            a=nums[i];
        }
        return false;
    }
};
