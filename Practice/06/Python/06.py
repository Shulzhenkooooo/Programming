#Shulzhenko
from math import sqrt
print('Введите значения переменных')
a = float(input())
b = float(input())
c = float(input())

print('Вы ввели: a =',a, 'b =',b, 'c =',c)

d =  (b**2) - (4*a*c)
print(d)

x1 = ((-b + pow(d,1/2)) / (2*a))
x2 = ((-b  - pow(d,1/2)) / (2*a))

if d>0:
    print('x1=',x1)
    print('x2=',x2)

elif d == 0 and x1 == 0:
    print('x2=',x2)

elif d == 0 and x2 == 0:
    print('x1=',x1)

elif d<0:
    print('Уравнение не имеет вещественных корней')


