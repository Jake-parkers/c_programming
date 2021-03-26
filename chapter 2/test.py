def mode(L):
    L = sorted(L)
    print(L)
    mode = L[0]
    currentMax = 1
    prevMax = 1
    for i in range(len(L)):
        if ((i + 1) < len(L)):
            if L[i] == L[i + 1]:
                currentMax = currentMax + 1
            else:
                if prevMax < currentMax:
                    mode = L[i]
                prevMax = currentMax
                currentMax = 1
        else:
            if prevMax < currentMax:
                mode = L[i]
    return mode

print(mode([9,9,9,9,9,9,9,9,9,9,8,2,4,2,5,10,5,2,3,10,7,10,9,10,7,10]))
