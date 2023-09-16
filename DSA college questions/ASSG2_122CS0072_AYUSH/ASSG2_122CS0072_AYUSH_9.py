def is_palindrome(n):
    return str(n) == str(n)[::-1]

def find_closest_palindrome(number):
    smaller_palindrome = None
    larger_palindrome = None

    for i in range(number - 1, 0, -1):
        if is_palindrome(i):
            smaller_palindrome = i
            break

    for i in range(number + 1, number + 1000):
        if is_palindrome(i):
            larger_palindrome = i
            break

    if smaller_palindrome is None:
        return larger_palindrome
    elif larger_palindrome is None:
        return smaller_palindrome
    else:
        return smaller_palindrome if abs(number - smaller_palindrome) <= abs(number - larger_palindrome) else larger_palindrome

try:
    num = int(input("Enter a positive integer: "))
    if num <= 0:
        print("Please enter a positive integer.")
    else:
        closest_palindrome = find_closest_palindrome(num)
        print(f"The closest palindrome number is: {closest_palindrome}")
except ValueError:
    print("Invalid input. Please enter a valid positive integer.")
