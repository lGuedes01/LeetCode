/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = 1;
    int k = digitsSize - 1;
    while(i && k >= 0){
        if(digits[k] + 1 < 10){
            digits[k] += 1;
            i--;
        }
        else if(digits[k] + 1 >= 10){
            digits[k] = 0;
            k--;
        }
    }
    if(i){
        int newSize = digitsSize + 1;
        *returnSize = newSize;
        int* l = (int*)malloc(newSize * sizeof(int));
        for(int j = 0; j < newSize;j++){
            if(j==0)
                l[j] = 1;
            else
                l[j] = 0;
        }    
        return l;
    }
    *returnSize = digitsSize;
    return digits;
}