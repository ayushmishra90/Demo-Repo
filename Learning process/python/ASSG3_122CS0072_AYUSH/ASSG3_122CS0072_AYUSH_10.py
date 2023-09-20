def sumPdivisors(a):
    sum=0
    for x in range (1,a):

        if a%x==0:
            sum+=x
    print(sum)
a=int(input("Enter the no. whose proper divisor sum is required : "))
sumPdivisors(a)