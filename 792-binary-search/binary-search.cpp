class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int start=0,end=n;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                end = mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return -1;
    }
};