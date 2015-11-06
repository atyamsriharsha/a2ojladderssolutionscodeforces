def gcd(a,b):
	if b==0:
		return a
	return gcd(b,a%b)
lcm1=0
ref1=0
ref2=0
ref3=0
ans=0
t,w,b = map(int,raw_input().split())
lcm1 = (w*b)/gcd(w,b)
ref1 = t/lcm1
ref2 = t%lcm1
ref3 = min(w,b)
ans = ref1*ref3
if ref2>=ref3:
	ref2=ref3-1
ans = ans+ref2
print str(int(ans/gcd(ans,t)))+"/"+str(int(t/gcd(ans,t)))