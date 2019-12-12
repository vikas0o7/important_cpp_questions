n=input()
l, r=[], []
for i in xrange(n):
	a, b=map(int, raw_input().split())
	l+=[a]
	r+=[b]
print sum([max(a,b) for a, b in zip(sorted(l), sorted(r))])+n