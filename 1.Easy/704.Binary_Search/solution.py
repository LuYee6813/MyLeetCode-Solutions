class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1
            
        while (left <= right):
            mid = left + (right - left) // 2
            if nums[mid] == target: return mid
            if nums[mid] > target: right = mid - 1 #如果二分後的數比目標數大 -> 目標數一定在左邊
            if nums[mid] < target: left  = mid + 1 #如果二分後的數比目標數小 -> 目標數一定在右邊
        return -1
            
                