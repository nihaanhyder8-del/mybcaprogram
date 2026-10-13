#process a single student data
#name,rollno,mobile,emailid,
#5sub marks,total
#must be implemented using nested list
from turtle import st


N=[]
R=[]
M=[]
E=[]
marks=[]
total=0
num=int(input('enter the number of STUDENTS:'))
for i in range(num):
    name=input('enter the name:')
    rollno=int(input('enter the roll number:'))
    mobile=int(input('enter the mobile number:'))
    emailid=input('enter the email id:')
    N.append(name)
    R.append(rollno)
    M.append(mobile)
    E.append(emailid)
    details=[N,R,M,E]

    for i in range(5):
        newmark=int(input("enter the subject marks:",))
        marks.append(newmark)
        listmarks=[marks]
       

studentdata=[listmarks,details]
for i in range(len(studentdata)):
    total+=marks[i]
print("the student detail and total marks is:",[total,studentdata])

student_list=([studentdata,total])
for i in range(len(student_list)):
    print('student list:',student_list[i])
