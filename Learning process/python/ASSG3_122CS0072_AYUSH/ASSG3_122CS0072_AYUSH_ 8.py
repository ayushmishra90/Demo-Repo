def fac(a):
    if a==0 or a==1:
        return 1
    else :
        return a*fac(a-1)
def per(n,r):
    return fac(n)/fac(n-r)
def com(n,r):
    return per(n,r)/fac(r)

n=int(input("Enter 'n' : " ))
r=int(input("Enter 'r' : " ))

print("Permutation : ",per(n,r))
print("Combination : ",com(n,r))