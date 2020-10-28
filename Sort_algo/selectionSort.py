arr = []
def input_arr():
    n = int(input("Enter size of array:\n"))
    for i in range(0,n):
        ele = int(input("Enter Elements: \n"))
        arr.append(ele)

def selection(arr):
    for i in range(0,len(arr)):
        min_index = i
        for j in range(i+1,len(arr)):
            if arr[min_index] > arr[j]:
                min_index = j
        
        arr[i],arr[min_index] = arr[min_index],arr[i]
input_arr()
print("Before\n")
print(arr )
selection(arr)
print("after\n")
print(arr )