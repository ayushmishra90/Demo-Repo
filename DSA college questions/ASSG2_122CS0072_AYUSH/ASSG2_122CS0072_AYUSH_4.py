
def print_table_with_sums(table):
    for row in table:
        for cell in row:
            print(cell, end='\t')
        print(sum(row))

    col_sums = [sum(table[i][j] for i in range(len(table))) for j in range(len(table[0]))]
    for col_sum in col_sums:
        print(col_sum, end='\t')
    print(sum(col_sums))

while True:
    try:
        rows_columns = int(input("Input number of rows/columns (0 to exit): "))
        if rows_columns == 0:
            break
        elif rows_columns < 1:
            print("Please enter a positive integer for rows/columns.")
            continue
        table = [[0 for _ in range(rows_columns)] for _ in range(rows_columns)]

        print("Input cell values:")
        for i in range(rows_columns):
            row_input = input().split()
            if len(row_input) != rows_columns:
                print(f"Expected {rows_columns} values for row {i + 1}.")
                continue
            for j in range(rows_columns):
                table[i][j] = int(row_input[j])
        print_table_with_sums(table)

    except ValueError:
        print("Invalid input. Please enter a valid integer.")

print("Exiting the program.")
