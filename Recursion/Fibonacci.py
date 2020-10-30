def fibo(n):
    if n <= 1:
        return n
    return fibo(n-1) + fibo(n-2)

n = int(input("Enter the number upto which you need fibonacci series : \n"))
print(fibo(n))
