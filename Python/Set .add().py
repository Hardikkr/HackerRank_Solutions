n = int(input())
lis = []
count = 0
temp = 0

for i in range(n):
    lis.append(input())

for i in range(n):
    for j in range(i+1, n):
        if lis[i] == lis[j]:
            temp += 1
    if temp == 0:
        count += 1
    temp = 0

print(count)
