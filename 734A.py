def fun(a):
    if a.count('A')>a.count('D'):
        return 'Anton'
    elif a.count('A')<a.count('D'):
        return 'Danik'
    else:
        return 'Friendship'

def main():
    n=int(input())
    s = input()
    print(fun(s))

if __name__=="__main__":
    main()

