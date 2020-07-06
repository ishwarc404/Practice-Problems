def checkpalindrome(number):
    number = str(number)

    length = len(number)
    for i in range(0, int(len(number)/2)):
        if(number[i] != number[length-i-1]):
            return False

    return True


largest = [0, 0, 0]
for i in range(999, 100, -1):
    for j in range(999, 100, -1):
        if(checkpalindrome(i*j)):
            if(i*j > largest[0]):
                largest = [i*j, i, j]

print("Largest palindromic number is {} as a product of {} and {}".format(
    largest[0], largest[1], largest[2]))
