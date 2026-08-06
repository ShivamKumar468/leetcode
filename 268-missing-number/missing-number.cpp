class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int count =0;
       for(int i=0;i<n; i++){
        count=count^i;
        count =count^nums[i];
       }
       return count^n;
    }
};