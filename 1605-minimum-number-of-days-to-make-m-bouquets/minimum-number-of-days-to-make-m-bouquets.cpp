bool possible(vector<int>& nums,int day, int m, int k){
    int cnt=0;
    int noofb=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<=day){
            cnt++;
        }
        else{
            noofb+=(cnt/k);
            cnt=0;

        }
        
    }
    noofb+=(cnt/k);
        if(noofb>=m) return true;
        else {
            return false;
        }
}
class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        int low = *min_element(nums.begin(), nums.end()); 
        int high = *max_element(nums.begin(), nums.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(nums,mid,m,k)==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;;
            }

        }
        return ans;
    }
};