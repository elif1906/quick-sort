import random
import time
import copy
from datetime import datetime





setting1 = 500
setting2 = 1000
setting3 = 5000
setting4 = 10000
setting5 = 25000




# Quick Sort-----------------------------------------------


def quick_sort(array):
    sort(array, 0, len(array) - 1)


def sort(array, left, right):
    if left >= right:
        return array
    pivot = array[(left + right) // 2]
    index = partition(array, left, right, pivot)

    sort(array, left, index - 1)
    sort(array, index, right)


def partition(array, left, right, pivot):
    while left <= right:
        while array[left] < pivot:
            left += 1
        while array[right] > pivot:
            right -= 1

        if left <= right:
            array[left], array[right] = array[right], array[left]
            left += 1
            right -= 1

    return left


choice = input("Enter a number from 1 to 5: ")

print("----------------------------Time Complexity Results------------------------------")
print("Note that the time displayed is in milliseconds.")
if choice == str(1):
    w = [random.randint(0, 10000000) for a in range(0, setting1)]
    start = time.time()
    quick_sort(w)
    
    end = time.time()
   
    print("Quick Sort ( size =", str(setting1), "): ", (end - start) )
    print(("\n"),w)
    

elif choice == str(2):
    w = [random.randint(0, 10000000) for a in range(0, setting2)]
    start = time.time()
    quick_sort(w)
    end = time.time()
    print("Quick Sort ( size =", str(setting2), "): ", (end - start) )
    #print(("\n"),w)
    
    
elif choice == str(3):
    w = [random.randint(0, 10000000) for a in range(0, setting3)]
    start = time.time()
    quick_sort(w)
    
  
    end = time.time()
    print("Quick Sort ( size =", str(setting3), "): ", (end - start) )
    print(("\n"),w)

   

elif choice == str(4):
    w = [random.randint(0, 10000000) for a in range(0, setting4)]
    start = time.time()
    quick_sort(w)
    end = time.time()
    print("Quick Sort ( size =", str(setting4), "): ", (end - start) )
    print(("\n"),w)
    

elif choice == str(5):
    w = [random.randint(0, 10000000) for a in range(0, setting5)]
    start = time.time()
    quick_sort(w)
    end = time.time()
    print("Quick Sort ( size =", str(setting5), "): ",(end - start) )

    #print(("\n"),w)
    