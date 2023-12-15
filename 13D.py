N=int(input())
S=2025-N
A=[]
for i in range(1,10):
    if S%i==0 and S/i<10:
        A.append([i,int(S/i)])

for i in range(len(A)):
    print(A[i][0],"x",A[i][1])