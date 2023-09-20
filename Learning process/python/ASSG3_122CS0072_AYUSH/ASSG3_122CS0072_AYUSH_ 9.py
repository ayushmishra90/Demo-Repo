def cubesum(a):
    sum = 0
    temp = a  # Store the original number in a temporary variable
    while temp > 0:
        digit = temp % 10
        sum += digit ** 3
        temp //= 10  # Use floor division to update temp
    return sum
def isArmstrong(a):
    if a==cubesum(a):
        return True
    else:
        return False
def PrintArmstrong(d):
    k=[]
    for x in range(0,d):
        if isArmstrong(x):
            k.append(x)
    return k
a=int(input())
d=int(input())
print(isArmstrong(a))
arm=PrintArmstrong(d)
print("Armstrong : ",arm)
            
    