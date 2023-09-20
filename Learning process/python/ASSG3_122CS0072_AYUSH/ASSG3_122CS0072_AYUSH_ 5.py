def generate_pascals_triangle(n):
    triangle = []

    for i in range(n):
        row = []
        for j in range(i + 1):
            if j == 0 or j == i:
                row.append(1)
            else:
                # Calculate the value using the previous row
                value = triangle[i - 1][j - 1] + triangle[i - 1][j]
                row.append(value)
        triangle.append(row)

    return triangle

def print_pascals_triangle(triangle):
    max_width = len(' '.join(map(str, triangle[-1])))  # Calculate max width for formatting

    for row in triangle:
        formatted_row = ' '.join(map(str, row))
        print(formatted_row.center(max_width))

# Example: Print the first 5 rows of Pascal's triangle
n=int(input("Enter the no. of rows to be printed in pascals triangle : "))
pascals_triangle = generate_pascals_triangle(n)
print_pascals_triangle(pascals_triangle)
