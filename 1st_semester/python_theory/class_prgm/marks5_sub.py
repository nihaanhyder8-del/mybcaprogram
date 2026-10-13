marks=['sachin',50,55,67,75,89]
# declares a list marks of 'sachin'
my_marks=[]
#dynamic inititiazion 
for number in range(5):
    newmark=int(input("enter the marks:"))
    my_marks.append(newmark)
print("list elements are:")
for i in range(len(my_marks)):
    print("the mark is:",my_marks[i])