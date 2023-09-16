def is_happy_number(num):
    seen = set()
    while num != 1 and num not in seen:
        seen.add(num)
        num = sum(int(digit) ** 2 for digit in str(num))
    return num == 1

def find_first_n_happy_numbers(n):
    happy_numbers = []
    num = 1

    while len(happy_numbers) < n:
        if is_happy_number(num):
            happy_numbers.append(num)
        num += 1

    return happy_numbers
try:
    n = int(input("Enter the number of happy numbers to find: "))
    if n <= 0:
        print("Please enter a positive integer.")
    else:
        first_n_happy_numbers = find_first_n_happy_numbers(n)
        print(first_n_happy_numbers)
except ValueError:
    print("Invalid input. Please enter a valid integer.")
