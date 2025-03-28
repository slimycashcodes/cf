def main():
    n=int(input())
    result = []
    for _ in range(n):
        a,b = map(int, input().split())
        result.append(b-a)
    for i in result:
        print(i)

if __name__=="__main__":
    main()

