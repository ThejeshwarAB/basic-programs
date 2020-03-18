#sourcecode
n=int(input())
for i in range(n):
    k=1
    for j in range(i+n):
        if i+j>=n-1:
            print(k,end='')
            k+=1
        else:
            print('* ',end='')
    print(end='\n')
#print pyramid pattern

'''
Sample IP:
4

Sample OP:
***1
**123
*12345
1234567
