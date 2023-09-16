
sentence = input("Enter a sentence: ")


words = sentence.split()


max_length = 0


for word in words:
    word_length = len(word)
    if word_length > max_length:
        max_length = word_length
print("Length of the longest word : ", max_length)
