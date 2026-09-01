class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>l_max(height.size(),0);
        vector<int>r_max(height.size(),0);
        int temp1=0;
        for(int i=0;i<height.size();i++){
            if(height[i]>temp1){
                temp1=height[i];
            }
            l_max[i]=temp1;
        }
        int temp2=0;
        for(int i=height.size()-1;i>=0;i--){
            if(height[i]>temp2){
                temp2=height[i];
            }
            r_max[i]=temp2;
        }
        int ans=0;
        for(int i=1;i<height.size()-1;i++){
            ans=ans+max(0,min(l_max[i],r_max[i])-height[i]);
        }
        return ans;
    }
};
