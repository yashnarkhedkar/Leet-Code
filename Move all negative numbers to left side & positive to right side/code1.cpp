vector<int> separateNegativeAndPositive(vector<int> &nums){
        int l = 0,r = nums.size()-1;
        while(l<=r){
            if(nums[l]>0 && nums[r]<0){
                swap(nums[l], nums[r]);
                l++;
                r--;
            }else if(nums[l]>0){
                r--;
            }else if(nums[r]<0){
                l++;
            }else{
                l++;
                r--;
            }
        }
        return nums;
}
