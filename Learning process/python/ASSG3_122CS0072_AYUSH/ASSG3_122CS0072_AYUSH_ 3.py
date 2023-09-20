#  a Python program to find index position and value of the maximum and minimum values in
# a given list of numbers using lambda

str = input("Enter a list of numbers separated by spaces: ")
numbers = [float(x) for x in str.split()]
# Define the original list
# numbers = [12, 33, 23, 10.11, 67, 89, 45, 66.7, 23, 12, 11, 10.25, 54]

# Find the index and value of the maximum using lambda
max_index, max_value = max(enumerate(numbers), key=lambda x: x[1])

# Find the index and value of the minimum using lambda
min_index, min_value = min(enumerate(numbers), key=lambda x: x[1])

# Print the results
print("Index position and value of the maximum value of the list:", (max_index, max_value))
print("Index position and value of the minimum value of the list:", (min_index, min_value))
