print('Введите число необходимое проверить:')
n = int(input())

def divider(n):
    i = 2
    j = 0 
    while i**2 <= n and j != 1:
        if n%i == 0:
            j = 1
        i += 1
    if j == 1:
        print ("Составное")
    else:
        print ("Простое")
print(divider(n))