from string import ascii_lowercase
def check(n,s):
    if n<26:
        return 'NO'
    hm = {l:0 for l in ascii_lowercase}
    s=s.lower()
    for i in s:
        hm[i]+=1

    for k,v in hm.items():
        if v<1:
            return 'NO'
    return 'YES'

s=int(input())
strr = input()
print(check(s,strr))



