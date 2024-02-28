import random

#print (random.radint(1000,9999))
#print(random.choice[1.2,10,20,1,2,2,"tops","python",true,false]))


data=open("data.txt","w")
for i rnge(10):
    data.write(str(random.radint(1,100)+" ")
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
       
               
                
