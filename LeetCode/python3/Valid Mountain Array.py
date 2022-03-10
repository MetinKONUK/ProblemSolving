def ValidMountainArray(nums): ##len(nums) = N
    if len(nums) == 1: return False #2
    passed = False #1 ##1
    
    for i in range(len(nums)-1): #N-1
        
        if nums[i+1] == nums[i]: #2
            return False
        
        if not passed and nums[i+1] < nums[i]: #5
            if i == 0: return False
            passed = True
            
        if passed and nums[i+1] > nums[i]: #3
            return False
    return False if passed == False else True #2

# T(N) = 2 + 1 + (N-1) * 5 + 2 = 5N = O(N)
# S(N) = N + 1 = O(N)

nums = [0,1,2,3,4,5,6,7,8,9]
print(ValidMountainArray(nums))