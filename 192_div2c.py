n = input()
rows,cols ={},{}
for i in range(n):
    line = raw_input()
    for j in range(n):
        if line[j] == '.':
            rows[i] = j
            cols[j] = i
if len(rows)==n:
    for r in rows:
        print r + 1,rows[r]+1
elif len(cols)==n:
    for c in cols:
        print cols[c]+1,c+1
else:
    print -1