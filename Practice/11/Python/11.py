import math
print('Введите основание степени..Enter..показатель степени:')
a = float(input())
n = int(input())

def power(a,n):
    if n == 0:
        return 1
    elif n>0:
        return a* power(a,n-1)
    else:
        return 1/a*power(a,n+1)

print ('Ответ =',(power(a,n)))