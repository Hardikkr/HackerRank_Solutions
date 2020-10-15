def print_full_name(a, b):
    c = a + " " + b
    print("Hello %s! You just delved into python." % c)

if __name__ == '__main__':
    first_name = input()
    last_name = input()
    print_full_name(first_name, last_name)
