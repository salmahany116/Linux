n=int(input("please enter number of elements :"))
list =[]
for i in range (n):
    element = int (input("enter your list :"))
    list.append(element)
    
count=0 
for i in range(n):
    if (list[i]== 4):
        count=count+1
print(count)       
       
  
