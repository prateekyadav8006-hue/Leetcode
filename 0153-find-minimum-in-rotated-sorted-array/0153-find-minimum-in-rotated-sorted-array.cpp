class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int n=nums.size();
        int high = n-1;
		int ans=INT_MAX;;
        
        while(low<=high){
			int mid=low+(high-low)/2;
			//if both half is sorted
			if(nums[low]<=nums[high]){
				ans=min(nums[low],ans);
				break;
			}
			//left half sorted
			if(nums[low]<=nums[mid]){
				ans=min(ans,nums[low]);
				low=mid+1;
			}
			else{
				ans=min(ans,nums[mid]);
				high=mid-1;
			}

		}
		return ans;
    }
};