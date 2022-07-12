class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=0;
        int size = nums.size();
        for(int reach = 0;i<n && i<=reach;i++){
            reach = max(i+nums[i],reach);
        }
        return i==n;
    }
};