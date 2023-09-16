def find_longest_subsequence(word, word_set):
    longest_subsequence = ""
    
    def is_subsequence(subsequence, string):
        i = 0
        for char in string:
            if i < len(subsequence) and char == subsequence[i]:
                i += 1
        return i == len(subsequence)
    
    for subsequence in word_set:
        if is_subsequence(subsequence, word) and len(subsequence) > len(longest_subsequence):
            longest_subsequence = subsequence
    
    return longest_subsequence
input1 = ("Green", {"Gn", "Gren", "ree", "en"})
input2 = ("pythonexercises", {"py", "ex", "exercises"})
result1 = find_longest_subsequence(input1[0], input1[1])
result2 = find_longest_subsequence(input2[0], input2[1])

print(result1)
print(result2)
