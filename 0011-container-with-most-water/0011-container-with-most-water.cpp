class Solution {
public:
    int maxArea(vector<int>& height) {

        int l = 0;
        int r = height.size() - 1;
        int maxi = 0;
        if(height.size() == 2){
            maxi = min(height[l],height[r])*r;
        }
        while(l < r){
            int lh = height[l];
            int rh = height[r];
            int min_h = min(lh,rh);
            int len = r - l;
            int curr_area = min_h * len;
            maxi = max(maxi, curr_area);
            if(lh < rh) l++;
            else r--;
        }
        return maxi;
    }
};