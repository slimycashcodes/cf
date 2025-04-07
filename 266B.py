def liner(t,se):
    for i in range(t):
        s=len(seq)-1
        i=0
        while i<s:
            if seq[i]=='B' and seq[i+1]=='G':
                seq[i] = 'G'
                seq[i+1] = 'B'
                i+=1
            i+=1
    
    return seq
    
s,t = map(int,input().split())
seq = list(input())


print(''.join(liner(t,seq)))
