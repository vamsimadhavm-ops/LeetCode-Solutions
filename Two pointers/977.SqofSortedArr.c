int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int left = 0;
    int right = numsSize - 1;
    int pos = numsSize - 1;
    int* answer = (int*)malloc(numsSize * sizeof(int));
    while (left <= right){
        if (abs(nums[left]) > abs(nums[right])){
            answer[pos] = nums[left] * nums[left];
            left++;
        }
        else{
            answer[pos] = nums[right] * nums[right];
            right--;
        }
        pos--;
    }
    *returnSize = numsSize;
    return answer;   
}