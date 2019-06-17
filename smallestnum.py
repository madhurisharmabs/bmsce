def getdata(a,b,c):
    a=int(input("Enter 1st num:"))
    b=int(input("Enter 2nd num:"))
    c=int(input("enter 3rd num:"))
    return a,b,c

def compute(a,b,c):
    if a<b and a<c:
        small=a
        print("A is smaller")
        
    elif b<a and b<c:
        small=b
        print("B is smaller")
        
    else:
        small=c
        print("C is smaller")
    return small
   
    
def output(small):
    print("The smallest of 3 number is :",small)
     
def main():
    a=0
    b=0
    c=0
    small=0
    a,b,c=getdata(a,b,c)
    small=compute(a,b,c)
    output(small)

main()
