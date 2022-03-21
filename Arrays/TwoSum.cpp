class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> sol(2);
        map<int,int> k;
        for(int i=0;i<nums.size();i++){
            int rem = target-nums[i];
            if(k.find(rem)!=k.end()){
                sol[0]=k.at(rem);
                sol[1] = i;
                return sol;
            }
            k.insert({nums[i],i});
        }
        return sol;
    }
};