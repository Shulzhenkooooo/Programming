#Shulzhenko
print('Введите два числа, а между ними знак нужного действия.')
x,n,y=input().split()
if n=='+':
  print('Сумма чисел равна', int(x) + int(y))
elif n=='-':
  print('Разность чисел равна', int(x) - int(y))
elif n=='*':
  print('Произведение чисел равна', int(x) * int(y))
elif n=='/' and y != 0:
  print('Частное чисел равна', int(x) / int(y))
elif n=='/' and y == 0:
  print('деление на 0')
else:
  print('Вы ввели неправильный знак.')
