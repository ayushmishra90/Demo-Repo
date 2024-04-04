# %%
def checkEven(x):
    if(x%2==0):
        print("even")
    else:
        print("odd")
def sumAll(*arg):
    s=0
    for x in arg:
        s+=x
    return s


