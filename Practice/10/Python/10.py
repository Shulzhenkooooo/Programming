print("Введите сумму, границы первого промежутка и границы второго промежутка")
s, l1, r1, l2, r2 = map(int, input().split())
success = True
x1 = l1
x2 = 0
if x1 + r2 < s:
    x2 = r2
    if s > r1 + x2:
        print("Нет таких иксов")
        success = False
    else:
       
        x1 = s - r2
else:
    if s < l1 + l2:
        print("Нет таких иксов")
        success = False
    else:
        
        x2 = s - x1
if success:
    print("x1 = {}\nx2 = {}".format(x1, x2))