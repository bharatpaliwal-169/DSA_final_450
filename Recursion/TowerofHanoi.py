def TOH(n,from_rod,to_rod,aux_rod):
    if(n==1):
        print("Move disk 1 from rod " + str(from_rod) + " to rod " + str(to_rod)  + '\n')
        return
    
    TOH(n-1,from_rod,aux_rod,to_rod)
    print("Move disk " + str(n) + " from rod " + str(from_rod) + " to rod " + str(to_rod) +'\n')
    TOH(n-1,aux_rod,to_rod,from_rod)

n = int(input("Enter the number of disks: "))
TOH(n,'A','C','B')