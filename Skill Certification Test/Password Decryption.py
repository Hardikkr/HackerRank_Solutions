def decryptPassword(s):
    s = list(s)
    i = 0
    l = len(s)
    zero = l

    while i<l:
        
        # ENTER ONLY 1 TIME AND CHANGE REPLACE EVERY NUMBER
        if s[0].isdigit() and s[0] != 0:
            for j in range(zero-1, 0, -1):
                if s[j] == "0":
                    zero = j
                    s[j] = s[i]
                    s.remove(s[0])
                    l -= 1
                    
        if s[i].isupper():
            if s[i+1].islower() and s[i+2]=="*":
                s.remove(s[i+2])
                l -= 1
                temp = s[i+1]
                s[i+1] = s[i]
                s[i] = temp

        i += 1

    s = "".join(s)
    return s      
        
if __name__ == '__main__':
    s = input()
    result = decryptPassword(s)
    print(result)
