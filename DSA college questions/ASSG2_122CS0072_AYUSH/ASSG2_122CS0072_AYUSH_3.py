
def is_prime(num):
    if num <= 1:
        return False
    if num <= 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False
    i = 5
    while i * i <= num:
        if num % i == 0 or num % (i + 2) == 0:
            return False
        i += 6
    return True
def goldbach_combinations(even_num):
    prime_numbers = [num for num in range(2, even_num) if is_prime(num)]
    combinations = 0

    for prime1 in prime_numbers:
        prime2 = even_num - prime1
        if prime2 in prime_numbers and prime2 >= prime1:
            combinations += 1

    return combinations
while True:
    even_num = int(input("Enter an even number (>=4): "))
    if even_num >= 4 and even_num % 2 == 0:
        break
    else:
        print("Please enter a valid even number (>=4).")
combinations = goldbach_combinations(even_num)
print(combinations)
