class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        // for(int n:nums) ans ^= n;
        // return ans;


        int start =0, end = nums.size()-1;

        if(end==0)
            return nums[0];
        int mid = 0;
        while(start<=end){
            mid = start + (end-start)/2;
            // if(mid%2==0){
            //     if(nums[mid]==nums[mid+1])
            //         start = mid +1;
            //     else
            //         end = mid -1;
            // }
            // else{
            //     if(nums[mid]==nums[mid+1])
            //         end = mid -1;
            //     else 
            //         start = mid+1;
            // }
            if(mid%2==0 && nums[mid]==nums[mid+1])
                start = mid+1;
            else if(mid%2==1 && nums[mid]==nums[mid-1])
                start = mid+1;
            else if(mid%2==1 && nums[mid]==nums[mid+1])
                end = mid-1;
            else if(mid%2==0 && mid!=0 && nums[mid]==nums[mid-1])
                end = mid-1;
            else 
                return nums[mid];
        }
        return nums[mid];
    }
};
