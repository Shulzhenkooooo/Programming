def k(a, b, c, n):
	if sum(c) == n:
		if not 0 in c:
			print(b, end=' ')
		return
	for i in range(len(c)):
		c[i] += 1
		k(a, b+a[i], c, n)
		c[i] -= 1

n = int(input('Введите количество символов: '))
s = input('Введите символы: ')
c = len(s)*[0]
k(s, '', c, n)