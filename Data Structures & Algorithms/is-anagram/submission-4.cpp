class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int ans[26] = {};
        for(int i=0;i<s.size();i++){
            ans[s[i] - 'a']+=1;
            ans[t[i] - 'a']-=1;
        }
        for(int i=0;i<26;i++){
            if(ans[i]!=0){
                return false;
            }
        }
        return true;
    }
};
