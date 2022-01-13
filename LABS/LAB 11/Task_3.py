#BSEF19M007 ANNS SHAHBAZ
def main():  #MAIN FUNCTION
    Student = []     #TO STORE CGPA
    for i in [0,1,2,3,4]: #ITERATING 5 TIMES
        CGPA = float(input("=> Enter CGPA: "))  #TAKING INPUT
        Student.append(CGPA) # adding the element  
    result = list(map(printGrade,Student)) #IMPLEMENTING USING MAP FUNCTION
    print(result) #PRINTING RESULT OBJECT
        
def printGrade(CGPA): #PRINTGRADE FUNCTION
    if(CGPA > 3.5):
        print("=> GRADE OF CGPA" , CGPA , "IS 'A'")
        
    elif(CGPA > 3.0):
        print("=> GRADE OF CGPA" , CGPA , "IS 'B'")      
        
    elif(CGPA > 2.5):
        print("=> GRADE OF CGPA" , CGPA ,"IS 'C'")      
        
    elif(CGPA < 2.5):
        print("=> GRADE OF CGPA" , CGPA ,"IS 'F'")         
        
main()
    

