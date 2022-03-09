def MaximumAscendingSubarraySum(nums):
    nums = nums + [0] # 1 + 1
    n = len(nums) # 1 + 1
    maxx = 0 # 1
    acc = nums[0] # 1 + 1
    for i in range(1, n): # N-1
        if nums[i] > nums[i-1]: # 1 + 1 + 1
            acc += nums[i] # 1 + 1
        else:
            if acc > maxx: # 1
                maxx = acc # 1
            acc = nums[i] # 1
    return maxx # 1

# T(N) = 7 + (N-1) * 5 + 1 = O(N)
# S(N) = N+1 + 1 + 1 = O(N)

print(MaximumAscendingSubarraySum([1, 1, 1, 1]))

