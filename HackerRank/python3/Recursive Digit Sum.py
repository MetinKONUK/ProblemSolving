def sod(n):
    res = 0
    while(n > 0):
        res += n % 10
        n = n // 10
    return res
def superDigit(n, k):
    n = int(n)
    if n < 10:
        return n
    return superDigit(sod(n)*k, 1) if k != 1 else superDigit(sod(n), 1)