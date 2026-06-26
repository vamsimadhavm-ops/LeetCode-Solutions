void moveZeroes(int* nums, int numsSize) {
    if (numsSize == 0){
        return;
    }
    int i, j;
    for(i = 0; i < numsSize; i++){
        if(nums[i] != 0){
            nums[j] = nums[i];
            j++;
        }
    }
    while (j < numsSize){
        nums[j] = 0;
        j++;
    }
    for (i = 0; i < numsSize; i++){
        printf("%d", nums[i]);
    }
    
}