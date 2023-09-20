#  a program to print twin primes less than 1000. If two consecutive odd numbers are both 
# prime then they are known as twin primes
def is_prime(number):
    if number <= 1:
        return False
    elif number <= 3:
        return True
    elif number % 2 == 0 or number % 3 == 0:
        return False
    i = 5
    while i * i <= number:
        if number % i == 0 or number % (i + 2) == 0:
            return False
        i += 6
    return True

# Find prime numbers in a range
start = 1
end = 1001
for num in range(start, end + 1):
    if is_prime(num) and is_prime (num+2) :
        print(num,"and",num +2)


