def average(array):
    sum = 0
    no = 0
    l = len(array)
    total = l
    for i in range(l):
        for j in range(i+1, l):
            if array[i] == array[j]:
                no += 1
                total -= 1
                break
        if no == 0:
            sum += array[i]
        no = 0
                
    return sum/total

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
