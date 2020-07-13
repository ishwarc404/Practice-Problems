# a = [1,2,0,7,2,0,2,0]

# b = [4,8,15,16,23,42]

# c = [3,1,4,1,5,9,2,6,5]

# d = [9,9,9,9,9,9]


def checkrecord(i):
    count = 0

    #first day
    if(i[0] > i[1]):
        count +=1
    
    #for all other days
    for k in range(1,len(i)-1):
        prev  = max(i[:k])
        try:
            if(i[k] > prev and i[k] > i[k+1]):
                count+=1
        except:
            pass
    
    #last day
    if(i[-1] > max(i[:-1])):
        count +=1

    return count


testcases = int(input())
for t in range(testcases):
    leng = int(input())
    inputs = list(input().split(" "))
    print("Case #" + str(t+1) + ":" + " " + str(checkrecord(inputs)))