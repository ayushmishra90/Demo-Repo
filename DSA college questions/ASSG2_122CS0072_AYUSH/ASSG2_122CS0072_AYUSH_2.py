
def clean_and_split_text(text):
    words = ''.join(char if char.isalpha() or char.isspace() else ' ' for char in text).split()
    return words
def most_frequent_word(words):
    word_count = {}
    most_frequent = ""
    max_count = 0
    for word in words:
        if word in word_count:
            word_count[word] += 1
        else:
            word_count[word] = 1
        if word_count[word] > max_count:
            most_frequent = word
            max_count = word_count[word]

    return most_frequent
def longest_word(words):
    longest = ""
    max_length = 0

    for word in words:
        length = len(word)
        if length > max_length:
            longest = word
            max_length = length

    return longest

text = input("Enter a text (only alphabetical characters and spaces): ")

words = clean_and_split_text(text)
most_frequent = most_frequent_word(words)
longest = longest_word(words)
print( most_frequent, longest)
