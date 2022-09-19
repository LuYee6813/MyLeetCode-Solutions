int search(int* nums, int numsSize, int target) {
    int low=0;
    int high=numsSize-1;
    int mid=(high+low)/2;
    while(low<=high)
    {
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]>target)
            high=mid-1;
        else
            low=mid+1;
        mid=(low+high)/2;
    }
    return -1;
}
