class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            vector<int>v(26,0);
            for(char c:strs[i]){
                v[c-'a']++;
            }
            ans[v].push_back(strs[i]);
        }
        vector<vector<string>>answer;
        for(auto &x:ans){
            answer.push_back(x.second);
        }
        return answer;
    }
};
