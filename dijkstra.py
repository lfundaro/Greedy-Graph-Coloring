def gen_next(a):
	N = len(a)
	i = len(a)-1

	while a[i-1] >= a[i]:
		i -= 1

	j = N

	while a[j-1] <= a[i-1]:
		j -= 1

	a[i-1],a[j-1] = a[j-1],a[i-1]

	i += 1
	j = N

	while i<j:
		a[i-1],a[j-1]=a[j-1],a[i-1]
		i+=1
		j-=1

	return a
