def find_sequence_type(sequence):
    n = len(sequence)

    if n < 3:
        return "Not enough terms to determine the sequence type."
    differences = [sequence[i] - sequence[i - 1] for i in range(1, n)]
    second_differences = [differences[i] - differences[i - 1] for i in range(1, n - 1)]
    third_differences = [second_differences[i] - second_differences[i - 1] for i in range(1, n - 2)]

    if all(diff == differences[0] for diff in differences):
        return "Linear"
    elif all(diff == second_differences[0] for diff in second_differences):
        return "Quadratic"
    elif all(diff == third_differences[0] for diff in third_differences):
        return "Cubic"
    else:
        return "Other"
try:
    sequence = [int(x) for x in input("Enter the sequence (comma-separated numbers): ").split(",")]
    sequence_type = find_sequence_type(sequence)
    print(f"The given sequence is {sequence_type}.")
except ValueError:
    print("Invalid input. Please enter a valid sequence of numbers separated by commas.")
