class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        int n=nums.size();
        set<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.insert(nums[i]);
        }
        int types=ans.size();
        int s=n/2;
        if(types<s){
            return types;
        }
        return s;
        
    }
};