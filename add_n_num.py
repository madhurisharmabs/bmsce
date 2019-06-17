def getdata(n):
    n=input("Enter numbers of num:")
    n=int(n)
    print("Enter the num:")
    return n
def compute(n):
    numlist=[1,2,3,4,5,6]
    for num in numlist:
        mysum=mysum+num
        print("numlist")
        print("num")
        return mysum
    
def output(mysum):
    print("The sum of n number is :",mysum)
     
def main():

    n=0
    mysum=0
    num=0
    n=getdata(n)
    mysum=compute(n)
    output(mysum)

main()
