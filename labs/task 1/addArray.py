def addArray(arr):
    total = 0
    for element in arr:
        total = total + (0 if element % 2 == 0 else element)
    return total

total = addArray([1, 2, 3,4,5])
print(total)
