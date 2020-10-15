n = list(map(int, input().split()))
lis = []
minVal = []

for i in range(n[0]):
    lis.append(list([int(k) for k in input().split()][:n[1]]))

for i in range(len(lis)):
    for j in range(len(lis[0])-1):
        if lis[i][j] < lis[i][j+1]:
            minVal.append(lis[i][j])
        else:
            minVal.append(lis[i][j+1])

print(max(minVal))
