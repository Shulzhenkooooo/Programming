#Shulzhenko
import math

print('Введите желаемый способ поиска площади треугольника:1 или 2')
solve_type = float(input())
if solve_type == (1):

    print('Введите значения  3 сторон треугольника:')
    a = float(input())
    b = float(input())
    c = float(input())
    print('Вы ввели:',a,b,c)

    p = (1 / 2)*(a+b+c)
    s = round(math.sqrt(p*(p-a)*(p-b)*(p-c)),3)

    print('S =',s)
elif solve_type == (2):

    print('Введите значения 3 каординат вершин треугольника(в формате:x1,y1):')

    x1, y1 = input().split()
    x1 = int(x1)
    y1 = int(y1)

    x2, y2 = input().split()
    x2 = int(x2)
    y2 = int(y2)

    x3, y3 = input().split()
    x3 = int(x3)
    y3 = int(y3)


    a11 = x1-x3
    a12 = y1-y3
    a21 = x2-x3
    a22 = y2-y3

    sbuff = 0.5 * ((a11*a22) - (a12*a21))

    if sbuff <0:
        s = sbuff*(-1)
        print('S =',s)
    elif sbuff > 0 or sbuff ==0:
        s = sbuff
        print('S =',s)
        