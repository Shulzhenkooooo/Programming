  
n = int(input())
mon = []
for _ in range(n):
    mon = input()
    if mon.startswith('a') and mon.endswith('55661'):
        mon.append(mon)

if len(mon) == 0:
    print(-1)
else:
    print(' '.join(mon))