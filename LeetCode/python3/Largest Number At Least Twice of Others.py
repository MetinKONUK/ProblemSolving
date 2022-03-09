def LargestNumberAtLeastTwiceOfOthers(nums):
    if len(nums) == 1: return 0 # 0 or 1
    largest = max(nums) # O(N)
    index = nums.index(largest) # O(N)
    nums.remove(largest) # O(N)
    second_largest = max(nums) # O(N)
    return -1 if second_largest * 2 > largest else index # 1
# T(N) = N + N + N + N + 1 = 4*N+1 = O(N)
# S(N) = N + 1 + 1 + 1 = N + 3 = O(N)

nums = [1]
print(LargestNumberAtLeastTwiceOfOthers(nums))