double findMaxAverage(int* nums, int numsSize, int k) {
    long long sum = 0;
    for (int i = 0; i < k; i++){
        sum += nums[i]; 
    }
    long long maxsum = sum;
    for(int i = k; i < numsSize; i++){
        sum = sum - nums[i - k] + nums[i];

        if (sum > maxsum){
            maxsum = sum;
        }
    }
    return (double) maxsum /k; 
}