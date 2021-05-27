base = input("Base:")
r1 = int(input("R1:"))
r2 = int(input("R2:"))
for i in range(r1, r2+1):
    with open(base+str(i)+".cpp", 'w') as fp:
        pass