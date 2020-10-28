arr = []
def input_arr():
    n = int(input("Enter size of array:\n"))
    for i in range(0,n):
        ele = int(input("Enter Elements: \n"))
        arr.append(ele)

def insertion_sort(arr):
    for i in range(1,len(arr)):
        key = arr[i]
        j = i-1
        while(j>=0 and key < arr[j]):
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
input_arr()
print("Before\n")
print(arr)
print('\n')
insertion_sort(arr)
print("after\n")
print(arr)