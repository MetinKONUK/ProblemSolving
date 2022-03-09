def FindTheTownJudge(n, trust): ##N + 1
    #N = n, M = len(trust), K = len(cands) (reduced state)
    if len(trust) == 0 and n > 1: return -1 #3
    if len(trust) == 0 and n == 1: return 1 #3
    
    cands = [0 for i in range(0, n+1)] #N ##N

    for a, b in trust: #M
        cands[a] = -1 #1
        if cands[b] != -1: #1
            cands[b] += 1 #1

    for i in range(len(cands)): #K
        if cands[i] == n-1: #1
            return i #1
    return -1 #1

# T(N) = 3 + 3 + N + M + 1 + 1 + 1 + K + 1 + 1 + 1 = O(N + M + K)

# S(N) = 2N + 1 = O(N)

print(FindTheTownJudge(3, [[1,3],[2,3],[3,1]]))