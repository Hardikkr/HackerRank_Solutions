n = int(input())
a = set(map(int, input().split()))

m = int(input())
b = set(map(int, input().split()))

num = a.intersection(b)
print(len(num))
