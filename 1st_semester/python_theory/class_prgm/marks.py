roll_no=0
name=''
sub_marks1=0
sub_marks2=0
sub_marks3=0
#function to read student data
def read_data():
    global sub_marks1,sub_marks2,sub_marks3,name,roll_no
    name=input('enter the name:')
    roll_no=int(input('enter the roll no:'))
    sub_marks1=int(input('enter the first subject marks:'))
    sub_marks2=int(input('enter the second subject marks:'))
    sub_marks3=int(input('enter the third subject marks:'))
    pass
#to calculate average marks in 3 subject
def getTotal():
    global sum
    sum=sub_marks1+sub_marks2+sub_marks3
    return sum
def getaverage():
    print(sum)
    pass
# to determine student grade
def fingGrade():
    pass

def displayresult():
    pass

for number in range(2,5):
    a,b,c,d,e=read_data()
    total=getTotal