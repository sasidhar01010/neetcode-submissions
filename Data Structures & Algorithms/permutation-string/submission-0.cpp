class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(char &c:s1){
            v1[c-'a']++;
        }
        int l=0;
        for(int i=0;i<s2.size();i++){
            v2[s2[i]-'a']++;
            if(i-l+1==s1.size()){
                if(v1==v2)return true;
                v2[s2[l]-'a']--;
                l++;
            }
        }
        return false;
    }
};
