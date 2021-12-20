t = int(input())

while t>0 :

    s = input()

    curr = 0
    for c in s :
        if c=="N" :
            curr += 1

    if curr==0 or curr>1:
        print("YES")
    else :
        print("NO")

    t-=1
