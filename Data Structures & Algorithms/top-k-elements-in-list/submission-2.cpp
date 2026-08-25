class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto &x:m){
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[v.size()-i-1].second);
        }
        return ans;
    }
};
