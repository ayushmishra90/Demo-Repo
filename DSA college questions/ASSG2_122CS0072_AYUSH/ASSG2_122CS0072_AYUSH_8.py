import math

def lcm(a, b):
    return abs(a * b) // math.gcd(a, b)
def find_lcm_of_list(numbers):
    if len(numbers) < 2:
        return "At least two numbers are required to find the LCM."

    result = numbers[0]

    for num in numbers[1:]:
        result = lcm(result, num)

    return result
try:
    num_list = [int(x) for x in input("Enter a list of positive integers separated by spaces: ").split()]
    
    if all(num > 0 for num in num_list):
        lcm_result = find_lcm_of_list(num_list)
        print(f"The LCM of the given numbers is: {lcm_result}")
    else:
        print("Please enter positive integers only.")
except ValueError:
    print("Invalid input. Please enter valid positive integers separated by spaces.")
