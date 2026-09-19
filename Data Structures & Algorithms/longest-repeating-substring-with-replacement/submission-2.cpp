class Solution {
public:
    int characterReplacement(string s, int k) {
        int max_char=0;
        int l=0;
        int ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            max_char=max(m[s[i]],max_char);
            if(i-l+1-max_char<=k){
                ans=max(ans,i-l+1);
            }
            else{
                while(i-l+1-max_char>k){
                    m[s[l]]--;
                    max_char=max(m[s[l]],max_char);
                    l++;
                }
            }
        }
        return ans;
    }
};
