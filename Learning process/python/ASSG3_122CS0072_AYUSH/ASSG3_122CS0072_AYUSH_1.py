#code to find distance b/w two points 

def distance(a=0,b=0,c=0,d=0):
    return ((a-c)**2+(b-d)**2)**(0.5)

print("Enter coordinates (x1,y1) ")
a=int(input("x1 : "))
b=int(input("y1 : "))
print("Enter coordinates (x1,y1) : ")
c=int(input("x2 : "))
d=int(input("y2 : "))

dis=distance(a,b,c,d)
print("Distance b/w two points is :",dis )