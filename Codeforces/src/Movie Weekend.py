for i in range(int(input())):
    n = int(input())
    L = list(map(int,input().split()))
    R = list(map(int,input().split()))
    p,r,i=1,1,1
    for k in range(n):
        if L[k]*R[k] > p:
            p = L[k]*R[k]
            r = R[k]
            i = k
        elif L[k]*R[k]==p:
            if R[k]>r:
                r = R[k]
                i = k
    print(i+1)
