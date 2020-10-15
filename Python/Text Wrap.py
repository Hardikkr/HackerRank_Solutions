import textwrap

def wrap(string, max_width):
    for i in range(0, len(string), max_width):
        newLine = [string[i:i+max_width]]
        print(newLine[0])
    return ""

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
