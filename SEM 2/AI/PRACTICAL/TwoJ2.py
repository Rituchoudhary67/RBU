st = [0,0]
T = 2
c1 = 4
c2 = 3

def check(T,st) :
    if st[1] == T:
        print("goal Achived")


def fill_J2(c,st):
    st[1] = c
    

def transJ2_J1(c,st) :       #(3,3)
    space = c - st[0]   #4-3 = 1
    if(st[0] < space):    # 3 < 1
        st[0] = st[0] + st[1]   # st[0] = 0 + 3 = 3
        st[1] = st[1] - st[0]
    else :
        st[1] = st[1] - space
        st[0] = st[0] + space
         
    
fill_J2(c2,st)
print(st)
check(T,st)

transJ2_J1(c1,st)
print(st)
check(T,st)

fill_J2(c2,st)
print(st)
check(T,st)

transJ2_J1(c1,st)
print(st)
check(T,st)

    