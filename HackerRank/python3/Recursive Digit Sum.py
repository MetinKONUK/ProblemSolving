def sod(n):
    res = 0 #1
    while(n > 0): #N
        res += n % 10 #1
        n = n // 10 #1
    return res #1
def superDigit(n, k):
    n = int(n) #1
    if n < 10: #1
        return n #1
    return superDigit(sod(n)*k, 1) if k != 1 else superDigit(sod(n), 1) #T(N-1)

# T(N) = O(N)
# S(N) = O(N)