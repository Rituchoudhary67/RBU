st = [0,0]
T = 2
c1 = 4
c2 = 3


def check(T,st) :
    if st[0] == T or st[1] == T:
        print("goal Achived")
        
        
def fill_J1(c,st):
    st[0] = c
    

def transJ1_J2(c,st):
    space = c2 - st[1]    
    if st[0] > space:
        st[1] = st[1] + space
        st[0] = st[0] - space
    else : 
        st[1] = st[1] + st[0]
        st[0] = 0


def empty_J2(c,st):
    st[1] = 0


fill_J1(c1,st)
print(st)
check(T,st)


transJ1_J2(c2,st)
print(st)
check(T,st)


empty_J2(c2,st)
print(st)
check(T,st)


transJ1_J2(c2,st)
print(st)
check(T,st)


fill_J1(c1,st)
print(st)
check(T,st)


transJ1_J2(c2,st)
print(st)
check(T,st)


