arr = []
def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        swapper = False
        for j in range(0,n-(i+1)):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]
                swapper = True
        if swapper == False:
            break
def input_arr():
    n = int(input("Enter size of array:\n"))
    for i in range(0,n):
        ele = int(input("Enter Elements: \n"))
        arr.append(ele)
input_arr()
print("Before\n")
print(arr)
bubbleSort(arr)
print("after\n")
print(arr)