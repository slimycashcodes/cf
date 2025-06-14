p,c = map(int,input().split())

i = 1
while True:
    if (p*i)%10 == c or (p*i)%10 == 0:
        print(i)

        exit()
    i+=1
