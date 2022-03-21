class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int ans = INT_MIN;
        while(l < r){
            
            // current capacity
            int now = (r - l) * min(height[l], height[r]);
            ans = max(ans, now);
            
            // if left is low than l++ else r--
            if(height[l] < height[r]) l++;
            else r--;
        }
        return ans;
    }
};