def FindTheMiddleIndexInArray(nums):
    for i in range(len(nums)): #N
        left_sum = sum(nums[:i]) #N
        right_sum = sum(nums[i+1:]) #N
        if left_sum == right_sum: #1
            return i #1 or 0
    return -1 #1 or 0
# T(N) = N * (N+N+1+1) = O(N^2)
# S(N) = N + 1 + 1 = O(N)

nums = [2, 3, -1, 8, 4]
print(FindTheMiddleIndexInArray(nums))