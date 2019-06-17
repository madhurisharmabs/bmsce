def getdata(a,b):
    a=int(input("Enter 1st num:"))
    b=int(input("Enter 2nd num"))
    return a,b

def compute(a,b):
    mysum=a+b
    print("the sum of two num is:",a,b,mysum)
    return mysum
    
def output(mysum):
     print("sum=",mysum)

def main():
    a=0;b=0;mysum=0
    a,b=getdata(a,b)
    mysum=compute(a,b)
    output(mysum)

main()
