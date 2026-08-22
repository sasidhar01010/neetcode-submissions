class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                a=a+s[i];
            }
        }
        int left=0;
        int right=a.size()-1;
        while(left<right){
            if(tolower(a[left])!=tolower(a[right]))return false;
            left++;
            right--;
        }
        return true;
    }
};
