void moveZeroes(int* nums, int numsSize){
    int pointer=0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            if (pointer != i)
            {
                nums[pointer] = nums[i];
                nums[i] = 0;
            }
            pointer++;
        }
           
    }
}