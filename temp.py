    n,m=[int(i) for i in input().split()]
    a=[int(i) for i in input().split()]
    b=[int(i) for i in input().split()]
    s=[]
    for i in a:
        m=-10**20
        for j in b:
            m=max(m,i*j)
        s.append(m)
    s.sort()
    print(s[-2])