class Solution {
public:
    bool ispalindrome(int l,int r, string s){
        while(l<r){
            if(s[l]!=s[r])return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0;
        int r=s.size();
        while(l<r){
            while(!isalnum(s[l]) && l<r)l++;
            while(!isalnum(s[r]) && l<r)r--;
            if(tolower(s[l])!=tolower(s[r])){
                return ispalindrome(l+1,r,s) || ispalindrome(l,r-1,s);
            }
            l++;
            r--;
        }
        return true;
    }
};