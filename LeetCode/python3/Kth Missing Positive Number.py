def KthMissingPositiveNumber(nums, k): ##N = len(nums) -> N
    maxx = nums[-1] #1
    if maxx - len(nums) < k: #2
        return k + len(nums) #2
    elif maxx - len(nums) >= k: #2
        return list(set(nums) ^ set(range(1, maxx+1)))[k-1] #O(N) * O(1) + O(M) * O(1)  = O(N+M) ##M = maxx -> N + M 

# T(N) = 1 + 2 + 2 + 2*(N+M) = O(N+M) (but 1 + 2 + 2-> Ω(1) exists)
# S(N) = 2*N + M = O(N+M)

nums = [2,3,4,7,11]
k = 9
print(KthMissingPositiveNumber(nums, k))