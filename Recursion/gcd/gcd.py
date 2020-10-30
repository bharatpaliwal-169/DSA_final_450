a,b = 0,0
def input_user():
    a = int(input("Enter the value of A : "))
    b = int(input("Enter the value of B : "))
    print(gcd(a,b))
    print(gcd_algo(a,b))

def gcd(a,b):
    if(b==0):
        return a
    return gcd(b,a%b)

def gcd_algo(x,y):
    while(y):
        x,y = y, x % y
    
    return x

input_user()
