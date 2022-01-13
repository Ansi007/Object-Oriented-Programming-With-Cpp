#BSEF19M007 ANNS SHAHBAZ
def displaySections(*args): #Arbitrary Arguement Function
    print("=> Prining: ")
    for i in args:
        print(i)    #Displaying all of them
        
def Calculator(num1,num2):
    return((num1 + num2), (num1 - num2), (num1 * num2), (num1/num2))


def main():
    
    displaySections("Hello","To","The","Future", 7) #GIVE AS MANY ARGUEMENTS
    
    Answer = [] #Part 2
    num1 = float(input("=> Give num1: "))   #First Number Input
    num2 = float(input("=> Give num2: "))   #Second Number Input
    Answer = Calculator(num1, num2)         #Calling Function and storing Answers
    print()
    print("Inputs passed to function: ", num1, "," , num2)  #Printing Answers
    print("Addition: ", Answer[0])
    print("Subtraction: ", Answer[1])
    print("Multiplication: ", Answer[2])
    print("Division: ", Answer[3])

main() #Main
    

