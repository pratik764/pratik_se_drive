print("start code")

try:
    a=int(input("enter A : "))
    b=int(input("enter B : "))

    c=a/b
    print("division : ",c)
    l=[1,2,3,4,5]
    index=int(input("enter index number : "))
    print("data on index ",index," is : ",l[index])
except Zerodivisionerror as e:
      print("exeption caught : ",e)
    
except valueerror as e:
    print("exeption caught : ",e)
except indexerror as e:
    print("exeption caught : ",e)
print("end code")    
