def Fibonacci(n): #Defines the Fibonacci function
    if n < 0: #Fibonacci can't use negative numbers
        print('Please enter a number greater than 0')
    elif n == 1:
        return 0
    elif n == 2:
        return 1 #Fibonacci starts with 0 and 1
    else:
        return Fibonacci(n-1) + Fibonacci(n-2)

num = int(input('Enter a number \n'))
print(Fibonacci(num)) #Outputs the called Fibonacci function