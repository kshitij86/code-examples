from itertools import chain, combinations

def powerset(ls):
    return list(chain.from_iterable(combinations(ls, r) for r in range(1, len(ls)+1)))

def set_maxNumLength(ls):
    mxlen = len(bin(max(ls))[2:])
    return mxlen

def sets_bineq(pwset):
    m = -1
    store = []
    for st in pwset:
        # print(st)
        i, j = 0, 0
        for g in st:
            num = bin(g)[2:]
            if(len(num) < mxlen):
                num = ((mxlen - len(num)) * '0') + num
            # print(num, mxlen)
            i += list(num).count('0')
            j += list(num).count('1')
        # print(i,j)
        if(i == j):
            store.append(st)
            if((i+j) > m):
                m = i
    return store


n = int(input())
ls = list(map(int, input().split()))
mxlen = set_maxNumLength(ls)
pwset = powerset(ls)

# print(mxlen)
res = bin(len(sets_bineq(pwset)))[2:]
if len(res) < mxlen:
    res = (mxlen - len(res)) * '0' + res
print(res)