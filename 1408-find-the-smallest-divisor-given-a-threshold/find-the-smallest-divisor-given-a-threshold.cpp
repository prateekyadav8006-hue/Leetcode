int divisor(vector<int>& nums, int d,int threshold){
    int sum=0;
    for(int i =0;i<nums.size();i++){
        sum+=(nums[i]+d-1)/d;

    }
    if(sum<=threshold){
        return d;
    }
    return -1;
}
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans=-1;
        while(low<=high){
            int mid = low + (high -low)/2;
            if(divisor(nums,mid,threshold)>=mid){
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