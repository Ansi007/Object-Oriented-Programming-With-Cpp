#ANNS SHAHBAZ BSEF19M007
#PART1
String_1 = ""
while len(String_1) < 10: #take input string of min 10 length
    String_1,Y = input("=> Give 10 charachtered string end it with '.': ").split(".")
    
#PART2
Subs = input("=> Give a substring: ") #take substring
TEMP = String_1[0:4] + Subs * 3 + String_1[10:] #replacing from 4 to 9 with three times of subs
print(TEMP)

#PART3
String_1 = String_1[0:4] + Subs + String_1[4:] #placing the subs in between of 3 and 4
print(String_1)

