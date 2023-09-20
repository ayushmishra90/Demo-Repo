a=int(input("Enter a no. to check for perfect no. : "))
check =0
for x in range(1,a) :
    if a % x ==0 :
        check += x

if check == a :
    print("Yes")
else:
    print("no")