import random


#print(random.randint(1000,9999))
#print(random.choice([1,2,10,20,1,1,2.2,"tops","python",true,false]))


data=open("dat.txt","w")
for i in range(10):
    data.write(str(random.randint(1,100))+" ")
data.close()

data=open("data.txt","r")
even=open("even.txt","w")
odd=open("odd.txt","w")
l=data.read().split(" ")[:-1]
for i in l:
    if int(i)%2==0:
        even.write(i+" ")
    else:
        odd.write(i+" ")
data.close()
even.close()
odd.close()


print("data file content")
data=("data.txt","r")
print(data.read())
data=open("data.txt","r")
even=open("even.txt","w")
odd=open("odd.txt","w")
l=data.read().slit(" ")[:-1]
for i in l:
    if int(i)%2==0:
        even.write(i+" ")
    else:
        odd.write(i+" ")
 data.close()
 even.close()
 odd.close()

 print("data file content")
 data=open("data.txt","r")
 print(dta.read())
 data.close()

 print("data file content")
 data=open("even.txt","r")
 print(dta.read())
 data.close()

 print("data file content")
 data=open("odd.txt","r")
 print(dta.read())
 data.close()
        
