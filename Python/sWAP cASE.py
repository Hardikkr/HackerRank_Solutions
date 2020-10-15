def swap_case(s):
    word = ""
    num = -1
    for i in s:
        num += 1 
        if i.islower():
            word += i.upper()
        elif i.isupper():
            word += i.lower()
        else:
            word += i
    return word

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
