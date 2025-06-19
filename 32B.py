s = input()
ss = ''
ans = ''
for i in s:
    if ss == '':
        if i == '.':
            ans += '0'
        else:
            ss+=i

    elif ss == '.':
        ans += '0'
        ss = ''
    elif ss == '-':
        if i == '.':
            ans += '1'
            ss = ''
        else:
            ans += '2'
            ss = ''

print(ans)
