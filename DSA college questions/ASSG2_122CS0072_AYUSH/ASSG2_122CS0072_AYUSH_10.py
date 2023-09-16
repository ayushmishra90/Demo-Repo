class Stack:
    def __init__(self):
        self.items = []

    def push(self, element):
        self.items.append(element)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        else:
            return "EMPTY"

    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        else:
            return "EMPTY"

    def is_empty(self):
        return len(self.items) == 0

    def show(self):
        if not self.is_empty():
            stack_str = " ".join(map(str, self.items))
            print(stack_str)
        else:
            print("EMPTY")


def main():
    stack = Stack()

    while True:
        try:
            command = input()
            if command == "0":
                break
            elif command.startswith("1 "):
                _, element = map(int, command.split())
                stack.push(element)
            elif command == "2":
                popped = stack.pop()
                print(popped)
            elif command == "3":
                top = stack.peek()
                print(top)
            elif command == "4":
                stack.show()
        except ValueError:
            print("Invalid input. Please enter a valid command.")

if __name__ == "__main__":
    main()
