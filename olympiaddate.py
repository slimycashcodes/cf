def fun(a):
    c=0
    d = {2:2,0:3,1:1,3:1,5:1}
    cs={}
    c=0
    for i in range(len(a)):
        if c==5:
            return i
        if a[i] in d:
            if a[i] not in cs:
                cs[a[i]]=1
            else:
                cs[a[i]]+=1

            if cs[a[i]]==d[a[i]]:
                c+=1
    if c==5:
        return i+1
    return 0
    
def main():
    n=int(input())
    result = []
    for _ in range(n):
        s=int(input())
        l = list(map(int, input().split()))
        result.append(fun(l))
    for i in result:
        print(i)

if __name__=="__main__":
    main()

