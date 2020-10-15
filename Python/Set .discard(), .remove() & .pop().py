n = int(input())
a = set(map(int, input().split()))

m = int(input())
for _ in range(m):
    command = list(input().split())
    if command[0] == "pop":
        a.pop()
    elif command[0] == "remove":
        a.remove(int(command[1]))
    elif command[0] == "discard":
        a.discard(int(command[1]))

print(sum(a))
