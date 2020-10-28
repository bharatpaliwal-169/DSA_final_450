# Binary Search
def binary_search(arr,l,r,x):
    while l<=r:
        mid = l + (r-1)//2

        if arr[mid] == x:
            return mid
        elif arr[mid] > x : #left side
            l = mid + 1
        else:   #right side
            r = mid - 1
    
    return -1




size = int(input('Enter the size of array : '))
arr = []
for i in range (0,size):
    ele = int(input("Enter the elements of array : \n"))
    arr.append(ele)
n = len(arr)
print(arr)
x = int(input('Enter the Element you are searching for:\n'))
result = binary_search(arr,0,len(arr) -1 ,x)
if result == -1:
    print("Element not found!!")
else:
    print("Element was found  \n" + "at index : ",result)
