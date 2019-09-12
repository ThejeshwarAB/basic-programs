#sourcecode
n=input()
a="abcdefghijklmnopqrstuvwxyz"
b=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
for i in n:
    for x in range(len(a)):
        if i==a[x]:
            b[x]+=1
l=""
for i in n:
    for x in range(len(a)):
        if i==a[x] and b[x]==1:
            l+=i
print(l)

'''
Sample IP:
blaaaackkk

Sample OP:
blc
'''
