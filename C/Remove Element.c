int removeElement(int* nums, int numsSize, int val) {
    if(numsSize == 0)
        return 0;
    int i = 0;
    int j = numsSize - 1;
    while(i <= j){
        if(nums[i] == val){
            while(nums[j] == val && j > i){   
                j--;
            }
            nums[i] = nums[j];
            nums[j] = val;
        }
        i++;
    }
    if(nums[numsSize-1] != val)
        return numsSize;
    return j;
}

/*Resolução preguiçosa (Independe oq vai ter dps dos dados diferentes de "val")

int removeElement(int* nums, int numsSize, int val) {
    int count = 0;
    for(int i=0; i<numsSize; i++){
        if(nums[i] != val){
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}
*/