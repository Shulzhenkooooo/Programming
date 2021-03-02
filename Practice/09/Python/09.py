MINUTES_IN_HOUR = 60

print('Ввод двух времён, пример: 12:00')

x1, y1 = map(int, input().split(sep=':'))
x2, y2 = map(int, input().split(sep=':'))

y1 = MINUTES_IN_HOUR * x1 + y1
y2 = MINUTES_IN_HOUR * x1 + y2

if abs(y1 - y2) > 15:
    print('Пересекутся!')
else:
    print('Не увидятся!')