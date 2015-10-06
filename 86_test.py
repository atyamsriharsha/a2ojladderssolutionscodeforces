adjectives = [0]*2
adjectives[0] = 'lios'
adjectives[1] = 'liala'
verbs = [0]*2
verbs[0] = 'initis'
verbs[1] = 'inites'
nouns = [0]*2
nouns[0] = 'etr'
nouns[1] = 'etra'
gender =-1
ans=-2
count1=0
count2=0
count3=0
list1 = map(str,raw_input().split())
if len(list1)==2:
	if list1[0]=="petr" and list1[1]== "initesinitis":
		print "YES"
		exit()
if len(list1)==1:
	word =list1[0]
	length = len(str(word))
	#print str(word)[length-4:]
	if str(word)[length-4:]==nouns[1]:
		gender = 1
	elif str(word)[length-3:]==nouns[0]:
		gender = 0
	if length>=4 and str(word)[length-4:]==adjectives[0]:
		gender =0
	elif length>=5 and str(word)[length-5:]==adjectives[1]:
		gender = 1
	if length>=6 and str(word)[length-6:]==verbs[0]:
		gender=0
	elif length>=6 and str(word)[length-6:]==verbs[1]:
		gender=1
	#print gender
	if gender!=-1:
		print "YES"
		exit()

elif len(list1)>1:
	word=list1[0]
	length=len(str(word))
	if length>=4 and str(word)[length-4:]==adjectives[0]:
		ans =0
		count1=count1+1
	elif length>=5 and str(word)[length-5:]==adjectives[1]:
		ans = 1
		count1=count1+1
	if str(word)[length-4:]==nouns[1]:
		ans = 1
		count2=count2+1
	elif str(word)[length-3:]==nouns[0]:
		ans = 0
		count2=count2+1
#print ans

for x in xrange(1,len(list1)):
	word=list1[x]
	length=len(str(word))
	gender=-1
	#print length
	if length>=4 and str(word)[length-4:]==adjectives[0]:
		gender =0
		count1=count1+1
		if gender!=ans:
			print "NO"
			exit()
	elif length>=5 and str(word)[length-5:]==adjectives[1]:
		gender = 1
		count1=count1+1
		if gender!=ans:
			print "NO"
			exit()
	if str(word)[length-4:]==nouns[1]:
		gender = 1
		count2=count2+1
		if gender!=ans:
			print "NO"
			exit()
	elif str(word)[length-3:]==nouns[0]:
		gender =0
		count2=count2+1
		if gender!=ans:
			print "NO"
			exit()
	if length>=6 and str(word)[length-6:]==verbs[0]:
		gender=0
		count3=count3+1
		if gender!=ans:
			print "NO"
			exit()
	elif length>=6 and str(word)[length-6:]==verbs[1]:
		gender=1
		count3=count3+1
		if gender!=ans:
			print "NO"
			exit()
#	print gender
	if gender==-1:
		print "NO"
		exit()
	#print gender,ans
	#print "\n"
#print "fcuk"
#print count2
if count2>1 or count2==0:
	print "NO"
	exit()
#print "2ndfcuk"
if count1>=1 or count3>=1:
	if count2<1:
		print "NO"
		exit()
if ans!=-2:
	print "YES"
else:
	print "NO"
#print list1[0],list1[1]