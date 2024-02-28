#function with no argument & no return value


def printline():
    print("*"*60)

printline()
print("welcome to user defined function using python.")
printline()

#function with argument but no return value.


def add(a,b):
    print("addition : ",a+b)


printline()
x=int(input("enter value : "))
y=int(input("enter value : "))
add(x,y)
printline()


#Function with argument & return value.


def sub(a,b):
    return a-b


printline()
x=int(input("enter value : "))
y=int(input("enter value : "))
add(x,y)
printline()
