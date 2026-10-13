#if age <5 ->child ->50% discount
#if age between 6 and 59 -->adult ->no discount
#if age >60 -> senior citizen -> 10% discount
#from Monday to Friday -> actual ticket price
#on Saturday and Sunday -> increase the TP to 25%


#enter your age:
#enter the week day:


ticket_price=100
age=int(input('enter your age:'))
day=input('enter the weekday:').strip().lower()
timeing=input('enter the show time [morning,afternoon,evening]:')

if (day  =="saturday"or"sunday"):
    ticket_price=ticket_price*125/100
    

if age<=5:
    ticket_price=ticket_price*50/100
elif age>59:
    ticket_price=ticket_price*90/100
else:
    ticket_price=ticket_price

if timeing=='morning':
     ticket_price=ticket_price
elif timeing=='afternoon':
    ticket_price=ticket_price*110/100
else:
    ticket_price=ticket_price*130/100

print("final ticket price:",ticket_price)

