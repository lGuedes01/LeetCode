#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    for(int i=0; i<numsSize; i++){
        //agora eu vou acessar tudo que está atrás de nums[i]
        for(int j=i-1; j >= 0 && i!=0; j--){
            if(nums[j] == target - nums[i]){
                int* result = (int*)malloc(sizeof(int) * 2);
                result[1] = i;
                result[0] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
    
}

