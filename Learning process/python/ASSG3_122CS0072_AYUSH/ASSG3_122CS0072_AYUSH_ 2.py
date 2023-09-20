
#Code using lmda function
str = input("Enter a list of numbers separated by spaces: ")
a = [int(x) for x in str.split()]
even=(list (filter(lambda x : x % 2 == 0,a)))
odd=(list (filter(lambda x : x % 2 ==  1,a)))
print("Even NO. in list : ",even)
print("Odd NO. in list : ",odd)