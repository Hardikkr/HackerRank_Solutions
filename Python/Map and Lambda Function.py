cube = lambda x: x**3

def fibonacci(n):
    fib = []
    a, b = 0, 1
    for _ in range(n):
        fib.append(a)
        c = a+b
        a = b
        b = c

    return fib

if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))
