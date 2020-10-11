n = int(input())
records = []
temp = []
result = []

for i in range(n):
    name = str(input())
    grade = float(input())
    records.append([name, grade])
    temp.append(grade)

maxi = min(temp)
while min(temp) == maxi:
    temp.remove(min(temp))

for i in range(n):
    if(records[i][1] == min(temp)):
        result.append(records[i][0])

result.sort()

for word in result:
    print(word)
