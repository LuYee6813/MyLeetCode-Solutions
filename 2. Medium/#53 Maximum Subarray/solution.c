// int maxSubArray(int* nums, int numsSize){
//     int max_sum = INT_MIN;
//     for (int i=0; i < numsSize; i++){
//         int sum = 0;
//         for (int j=i; j < numsSize; j++){
//             sum += nums[j];
//             if(sum > max_sum){
//                 max_sum = sum;
//             }
//         }
//     }   
//     return max_sum;
// }

// DP
int maxSubArray(int* nums, int numsSize) {
    int i = 0, sum = 0;
    int max = nums[0];
    for(i = 0; i < numsSize; i++) {
        sum += nums[i];
        if(max < sum)
            max = sum;
        if(sum < 0)
            sum = 0;
    }
    return max;
}