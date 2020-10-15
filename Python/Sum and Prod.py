n = list(map(int, input().split()))
lis = []
sum = 0
prod = 1

for i in range(n[0]):
    lis.append(list([int(k) for k in input().split()][:n[1]]))

for i in range(len(lis)):
    for j in range(len(lis[0])):
        sum += lis[j][i]
    prod *= sum
    sum = 0

print(prod)
