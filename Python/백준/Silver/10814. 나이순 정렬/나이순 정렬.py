n = int(input())
a = [(int(x), y) for _ in range(n) for x, y in [input().split()]]
a.sort(key=lambda k: k[0])
for i in range(n):
    print(*a[i], end='\n')