int searchInsert(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize-1 ;
    int mid = 0;

    while(nums[mid] != target){
        mid = low + (high - low)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

        if(low > high){break;}

    }
    return low;
}