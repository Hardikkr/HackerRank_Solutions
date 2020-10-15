n = int(input())
a = set(map(int, input().split()))

m = int(input())
b = set(map(int, input().split()))

req = sorted(list(b.symmetric_difference(a)))

for i in req:
    print(i)
