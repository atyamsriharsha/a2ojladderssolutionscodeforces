N = input()
p = map(int, raw_input().split())
ans = 0
keep_xor = [0]   
for i in range(1, N+1):
    keep_xor.append(keep_xor[i-1]^i)
for i in range(1, N+1):
    ans ^= p[i-1]
    div = N/i
    if(div%2):
        ans ^= keep_xor[i-1]     
    if(N%i != 0):
        ans ^= keep_xor[N%i]
print ans