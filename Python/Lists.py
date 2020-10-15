n = int(input())
lis = []
temp1, temp2 = 0, 0

for _ in range(n):
    line = input().split()
    if line[0] == "print":
        print(lis)
    elif line[0] == "sort":
        lis.sort()
    elif line[0] == "pop":
        lis.pop()
    elif line[0] == "reverse":
        lis.reverse()
    elif line[0] == "append":
        temp1 = int(line[1])
        lis.append(temp1)
    elif line[0] == "remove":
        temp1 = int(line[1])
        lis.remove(temp1)
    else:
        temp1 = int(line[1])
        temp2 = int(line[2])
        lis.insert(temp1, temp2)
    temp1 = 0
    temp2 = 0
    line = ""
