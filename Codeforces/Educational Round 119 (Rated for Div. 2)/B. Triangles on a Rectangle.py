
t = int(input())
while t>0:

    w, h = map(int, input().split())

    ans = -1
    
    for i in range(2) :
            tokens = [ int(tok) for tok in input().split() ]
            k, x = tokens[0], tokens[1:]
            ans = max(ans, ((x[k-1]-x[0])*h))

    for i in range(2) :
            tokens = [ int(tok) for tok in input().split() ]
            k, y = tokens[0], tokens[1:]
            ans = max(ans, ((y[k-1]-y[0])*w))
   
    print(ans)

    t-=1
