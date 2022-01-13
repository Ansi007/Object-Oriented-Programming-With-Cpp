#ANNS SHAHBAZ BSEF19M007
#PART1
input_string = input("=> Enter 4 integers separated by comma: ") #take input
list_1  = input_string.split(",") 

#PART2
while len(list_1) > 4:  #make it exact 4
    list_1.pop()
    
for i in range(4):      #make them integers
    list_1[i] = int(list_1[i])
print("=> The list:",list_1) #print

#PART3
from fractions import Fraction #importing fraction module
F1 = Fraction(1,3)      #make two fractions
F2 = Fraction(2,3)
print("=> Fraction F1:", F1)
print("=> Fraction F2:", F2)

#PART4
print("=> F1 + F2:", F1 + F2)       #adding them
print("=> F2 - F1:", F2 - F1)       #subtracting them
