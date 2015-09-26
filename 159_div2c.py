import math
def main():
	lst = []
	n = int(raw_input())
	for itr in range(n):
		x,y=map(float,raw_input().split())
		if y==0:
			if x>0:
				lst.append(0.0)
			else:
				lst.append(180.0)
		elif x==0:
			if(y>0):
				lst.append(90.0)
			else:
			 	lst.append(270.0)
		elif x>0 and y>0:
			r = math.degrees(math.atan(y/x))
		  	lst.append(r)
		elif x<0 and y<0 :
			r = math.degrees(math.atan(y/x))
		 	lst.append(180.0+r)
		elif x>0 and y<0 :
			r = math.degrees(math.atan(y/x))
			lst.append(360-(r*-1))
		else:
			r = math.degrees(math.atan(y/x))
			lst.append(180 - (r*-1))
	lst.sort()
	maxi = 0 
	dif = 0
	for itr in range(n-1):
		dif = (lst[itr+1]-lst[itr])
		if dif>maxi:
			maxi = dif
	dif = 360.0-(lst[n-1]-lst[0])
	if dif>maxi:
		maxi =dif
	print 360.0-maxi
	  
if __name__=='__main__':
	main()