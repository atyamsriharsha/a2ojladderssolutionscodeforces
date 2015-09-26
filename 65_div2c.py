n = input()
status = map(int, raw_input().split())
frt = False
ors = lambda x, y: x or y
ands = lambda x, y: x and y
b = False
for l in range(1, n/3+1):
    if n%l!=0: continue
    for i in range(l):
        b = True
        for j in range(i, n, l):
            if status[j] == 0:
                b = False; break
        if b: 
        	break
    if b: 
    	break
print 'YES' if b else 'NO'