def getdata(num):
    n=int(input("Enter size of num:"))
    print("Enter the num:")
    for i in range(n):
        x=int((input()))
        num.append(x)
        i+=1
    return num
    
def compute(num):
        mysum=0
        n=len(num)
        mysum=sum(num)
        #print("num")
        return mysum
    
def output(mysum):
    print("The sum of n number is :",mysum)
     
def main():

    arr=[]
    arr=getdata(arr)
    result=compute(arr)
    output(result)

main()
