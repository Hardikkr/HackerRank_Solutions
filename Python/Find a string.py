def count_substring(string, sub_string):
    count = 0
    matches = 0
    subLen = len(sub_string)
    for i in range(len(string)-subLen+1):
        if sub_string[0] == string[i]:
            for j in range(subLen):
                if sub_string[j] == string[i+j]:
                    matches += 1
            if matches == subLen:
                count += 1
        matches = 0
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
