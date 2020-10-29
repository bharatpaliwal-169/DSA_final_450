arr = []
def input_arr():
    n = int(input("Enter size of array:\n"))
    for i in range(0,n):
        ele = int(input("Enter Elements: \n"))
        arr.append(ele)

def quick_sort(arr,low,high):
    if low < high:
        pi = partition(arr,low,high)

        quick_sort(arr,low,pi - 1)
        quick_sort(arr,pi+1,high)

def partition(arr,low,high):
    pivot = arr[high]
    i = low - 1
    for j in range (low,high):
        if pivot > arr[j]:
            i+=1
            arr[i],arr[j] = arr[j],arr[i]
    arr[i+1],arr[high] = arr[high],arr[i+1]
    return (i+1)



input_arr()
n = len(arr)
print("Before\n")
print(arr)
quick_sort(arr,0,n-1)
print("after\n")
print(arr)