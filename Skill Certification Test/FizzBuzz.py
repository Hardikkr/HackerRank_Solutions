def fizzBuzz(n):
    temp = 0
    output = ""
    for i in range(1, n+1):
        if i%3 == 0:
            temp += 1
            output += "Fizz"
        if i%5 == 0:
            temp += 1
            output += "Buzz"
        if temp>0:
            print(output)
        else:
            print(i)
        temp = 0
        output = ""

n = int(input())
fizzBuzz(n)
