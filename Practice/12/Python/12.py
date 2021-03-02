import math

print('Введите натуральное число:')
a = int(input())
# через встроенную функцию
# print('Ответ =',math.factorial(a))
# через новую функцию
factorial = 1

for i in range(2, a+1):
    factorial *= i

print(factorial)