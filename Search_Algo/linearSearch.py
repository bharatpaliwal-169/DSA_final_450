# Linear Search
def linear_search(arr,n,x):
    for i in range(0,n):
        if( arr[i] == x):
            return i
    return -1



size = int(input('Enter the size of array : '))
arr = []
for i in range (0,size):
    ele = int(input("Enter the elements of array : \n"))
    arr.append(ele)

n = len(arr)
print(arr)

x = int(input('Enter the Element you are searching for:\n'))

result = linear_search(arr,n,x)
if result == -1:
    print("Element not found!!")
else:
    print("Element was found  \n" + "at index : ",result)
