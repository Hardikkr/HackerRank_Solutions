n = int(input())
query = {}

for i in range(n): 
    inputArray = input().split()
    marks = list(map(float, inputArray[1:]))
    query[inputArray[0]] = sum(marks)/float(len(marks))

print("%.2f" % query[input()]) # print(output) formatted to 2 decimal places
