def reverse_words_order_and_swap_cases(sentence):
    words = sentence.split()
    num = len(words)
    for i in range(num-1, -1, -1):
        for letter in range(len(words[i])):
            if words[i][letter].isupper():
                print(words[i][letter].lower(), end = "")
            else:
                print(words[i][letter].upper(), end = "")
        print(" ", end = "")

sentence = input()
reverse_words_order_and_swap_cases(sentence)
