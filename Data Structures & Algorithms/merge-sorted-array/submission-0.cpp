class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l1=0;
        int l2=0;
        vector<int>ans;
        while(l1<m && l2<n){
            if(nums1[l1]<nums2[l2]){
                ans.push_back(nums1[l1]);
                l1++;
            }
            else{
                ans.push_back(nums2[l2]);
                l2++;
            }
        }
        while(l1<m){
            ans.push_back(nums1[l1]);
            l1++;
        }
        while(l2<n){
            ans.push_back(nums2[l2]);
            l2++;
        }
        
        nums1=ans;
    }
};