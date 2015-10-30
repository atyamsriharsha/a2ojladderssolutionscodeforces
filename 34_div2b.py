n,m=map(int,raw_input().split())
list1=[0]*n
list1 =map(int,raw_input().split())
count1 =0
res=0
list1.sort()
for x in xrange(0,n):
 	if list1[x]<0 and res<m:
 	 	count1 = count1+abs(list1[x])
 	 	res=res+1
print count1 