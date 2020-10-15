if __name__ == '__main__':
    s = input()
    alphanum = 0
    alphabet = 0
    digit = 0
    lower = 0
    upper = 0
    for i in s:
        if i.isalnum(): alphanum += 1
        if i.isalpha(): alphabet += 1
        if i.isdigit(): digit += 1
        if i.islower(): lower += 1
        if i.isupper(): upper+= 1
    if alphanum>0: print(True)
    else: print(False)
    if alphabet>0: print(True)
    else: print(False)
    if digit>0: print(True)
    else: print(False)
    if lower>0: print(True)
    else: print(False)
    if upper>0: print(True)
    else: print(False)
