void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if (k == 0){
        return;
    }
    int temp[k];
    for (int i = 0; i < k; i++){
        temp[i] = nums[numsSize - k + i];
    }
    for(int i = numsSize - k -1 ; i >= 0 ; i--){
        nums[i + k] = nums[i];
    }
    for (int i = 0; i < k; i++){
        nums[i] = temp[i];
    }
}