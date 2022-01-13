#ANNS SHAHBAZ BSEF19M007
#PART 1
LOW = input ("=> Give LOW Number: ")  #input first number
HIGH = input ("=> Give HIGH Number: ") #input second
LOW = int(LOW)  #make them integers
HIGH = int(HIGH)
while LOW <= HIGH:      #print squares
        print("=> The square of ",LOW, " is: ",  LOW * LOW)
        LOW += 1

#PART 2
ODD_EVEN = input("=> Give Number to check if it's even or odd: ")  #take input
ODD_EVEN = int(ODD_EVEN)    #make integer
if ODD_EVEN % 2 == 0:   #check even or odd
    print(ODD_EVEN, " IS EVEN")
else:   
    print(ODD_EVEN, "IS ODD")
    
#PART 3
a, b, c, d, e = map(int, input("=> GIVE 5 NUMBERS: ").split()) #take input
#find largest
if a >= b and a >= c and a >= d  and a >= e:
    print(a, " is the largest number")
elif b >= a and b >= c and b >= d and b >= e:
    print(b, " is the largest number")
elif c >= a and c >= b and c >= d and c >= e:
    print(c, " is the largest number")
elif d >= a and d >= c and d >= b and d >= e:
    print(d, " is the largest number")
elif e >= a and e >= c and e >= d and e >= b:
    print(e, " is the largest number")    
    
#find smallest    
if a <= b and a <= c and a <= d  and a <= e:
    print(a, " is the smallest number")
elif b <= a and b <= c and b <= d and b <= e:
    print(b, " is the smallest number")
elif c <= a and c <= b and c <= d and c <= e:
    print(c, " is the smallest number")
elif d <= a and d <= c and d <= b and d <= e:
    print(d, " is the smallest number")
elif e <= a and e <= c and e <= d and e <= b:
    print(e, " is the smallest number")



#PART 4
first = input("=> GIVE FIRST NUMBER: ")#take input
second = input("=> GIVE SECOND NUMBER: ")
first = int(first)      #make integers
second = int(second)

if first % second == 0:     #check if multiple
    print(first, " is the multiple of ", second)
else:
    print(first, " is not the multiple of ", second)

#PART 5
print("=> PRINTING PATTERN")
z = 1           #printing the pattern
for i in [1,2,3,4,5,6]:
    for j in range(6):
        print(z,end =" ")
        z = z + i     
    print()
    z = 1         
