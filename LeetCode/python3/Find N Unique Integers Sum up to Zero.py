def FindNUniqueIntegersSumUpToZero(n):
    nums = list() #1
    for i in range(1, n//2+1): # n//2 + 1 - 1
        nums.append(i) #1
        nums.append(i*-1) #1
    return nums + [0] if n % 2 else nums #1 or #2

# T(N) = 1 + n//2 + 1 - 1 + 1 + 1 + 2 = O(N)
# S(N) = len(nums) + size(n) = N + 1 + 1 or N + 1 = O(N)

n = 8
print(FindNUniqueIntegersSumUpToZero(n))

