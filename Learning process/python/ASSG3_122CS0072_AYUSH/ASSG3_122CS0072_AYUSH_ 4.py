#  a Python program to count the occurrences of the items in a given list using lambda


str = input("Enter a list of numbers separated by spaces: ")
a = [int(x) for x in str.split()]
# map(a,times)
occurrences = dict(map(lambda x: (x, a.count(x)), set(a)))

# Print the dictionary of occurrences
print(occurrences)