#PART1
import random                 
f = open('data.txt', 'w')
for i in range(11):
    x = random.randint(0,1) 
    string_1 = str(x)  
    f.write (string_1)
    f.write (',')
    x = random.randint(11,49)
    string_1 = str(x)  
    f.write (string_1)
    f.write ('\n')
f.close ()

