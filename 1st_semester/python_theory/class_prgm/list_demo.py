marks=[]
total=0
N=int(input("enter the size of the list:"))
for i in range(N):
    newmark=int(input("enter the element:"))
    marks.append(newmark)

print("list element are:")
for i in range(len(marks)):
    print(marks[i])

for i in range(len(marks)):
    total+=marks[i]
print("the sum of element is:",total)