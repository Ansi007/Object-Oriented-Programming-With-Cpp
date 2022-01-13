#ANNS SHAHBAZ BSEF19M007
#PART1
String_1 = input("=> GIVE space separated 10 values: ") #taking input
list_1 = String_1.split(" ")

#PART2
list_1 = list_1 + [i * 3 for i in list_1 ] #tripling and concatenating
print(list_1)
