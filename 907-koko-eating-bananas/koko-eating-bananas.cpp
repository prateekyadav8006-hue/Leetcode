long long fun(vector<int>& nums,int hourly){
    long long hrs=0;
    for(int i=0;i<nums.size();i++){
        hrs += ceil((double)nums[i] / hourly);
    }
    return hrs;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int low=1;
        int high=*max_element(nums.begin(), nums.end());
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long rate=fun(nums,mid);
            if(rate<=h){
                ans=mid;
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }

};