# assignment 3

#you have denominations of rupee notes in the following from 1 2 3 10 20 100 200 500 2000 take any amount from the user and print the minimum number of notes needed to add up to that numbers .
"""
n = int(input("enter the number of note"))
s = 0 
if n >= 2000:
    s = s + n // 2000
    n = n % 2000
if n >= 500:
    s = s + n // 500
    n = n % 500
if n >= 200:
    s = s + n // 200
    n = n % 200
if n >= 100:
    s = s + n // 100
    n = n % 100
if n >= 20:
    s = s + n // 20
    n = n % 20
if n >= 10:
    s = s + n // 10
    n = n % 10
if n >= 5:
    s = s + n // 5
    n = n % 5
if n >= 2:
    s = s + n // 2
    n = n % 2
if n >= 1:
    s = s + n // 1
    n = n % 1

print(s) """






#leap year
"""
y = int(input("enter the year:"))
if ( (y%4==0 ) and ((y%400==0) or (y%100!=0))) :
	print("leap year")
else :
	print("not leap year")
"""






# check if the given number is divisble by 5 11 both or not
"""
num = int(input("enter the number : "))
if num%5==0  : print("5")
elif num%11==0 : print("11")
elif num%5==0 and num %11==0 : print("boht")
else  :
	print("none") """
	
	
	
	
	
	
	
#second max of 3 numbers
"""
a = int(input("enter the number a :"))
b = int(input("enter the number b :"))
c = int(input("enter the number c :"))
if a>b:
	max = a
	sum = b
else :
	max = b
	sum = a
if max > c :
	if c > sum :
		print(c)
	else :
		print(sum)
else :
	print(max)"""
	
	
	
	
	
#max using function 
"""a = max(56,24,78,23)
print(a)"""




#min using function 
"""
a = min(23,564,86,45,2,5,67,445)
print(a)"""
































	
	
	
	
	
	
		

