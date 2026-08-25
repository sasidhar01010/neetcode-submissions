class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<vector<int>>v(nums.size()+1);
        for(auto &x:m){
            v[x.second].push_back(x.first);
        }
        vector<int>ans;
        for(int i=v.size()-1;i>0;i--){
            for(int x:v[i]){
                ans.push_back(x);
                if(ans.size() == k)return ans;
            }
        }
        return ans;
    }
};
