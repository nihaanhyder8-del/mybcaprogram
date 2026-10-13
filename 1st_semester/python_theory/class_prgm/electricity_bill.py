choice=input('enter your choice\n 1.commercial\n 2.noncommercial\n:')
if choice=='commercial':
    unit=int(input('enter the units: '))
    if (unit>0 and unit<100):
        price=unit*10
    elif(unit>101 and unit<300):
        price=(100*10)+(unit-100)*12
    else:
        price=(100*10)+(unit-100)*15
    threshold=input('is threshold found[yes/no]:')
    if threshold=='yes':
        price=price+100
    else:
        unit
elif choice =='noncommercial':

    unit=int(input('enter the units: '))
    if (unit>0 and unit<=100):
        price=unit*5
    elif(unit>101 and unit<=300):
        price=(100*10)+(unit-100)*6
    else:
        price=(100*10)+(unit-100)*8
    threshold=input('is threshold found[yes/no]:')
    if threshold=='yes':
        price=price+50
    else:
        unit

print('the electricity bill is:',price)
date=input('enter the date:')
print('if the bill is paid before 1-1-2026 you will get [10%] discount')