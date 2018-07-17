__Author__ = 'mike2ox'
__Copyright__ = 'Copyright (c) 2018 Mike2ox All rights reserved.'
__Status__ = 'Done'
__Problem_no__ = [2557,1000, 2558, 10950, 10951,10952,10953, 11021, 11022]

# Hello world
def no_2557():
    print('Hello World!')

# A+B
def no_1000():
    A, B = input().split()
    A = int(A)
    B = int(B)
    print(A+B)

# A+B 2
def no_2558():
    A = int(input())
    B = int(input())
    print(A+B)

# A+B 3
def no_10950():
    t_case = int(input())
    result = []

    for x in range(t_case):
        A, B = input().split()
        c = int(A)+int(B)
        result.append(c)
    
    for l in range(len(result)):
        print(result[l])

# A+B 4
def no_10951():
    # t_case = int(input())
    # result = []
    
    while True:
        try:
            A, B = input().split()
            c = int(A)+int(B)
            print(c)
        # NOTE : 입력이 없을 경우 (C++ : while(cin >>a >>b;)))            
        except EOFError:
            break

# A+B 5
def no_10952():

    while True:
        A, B = input().split()
        
        if A == '0' and B == '0':
            break
        
        c = int(A)+int(B)
        print(c)

# A+B 6
def no_10953():

    t_case = int(input())
    result = []

    for x in range(t_case):
        A, B = input().split(',')
        c = int(A)+int(B)
        result.append(c)
    
    for l in range(len(result)):
        print(result[l])


# A+B 7
def no_11021():

    t_case = int(input())
    result = []

    for x in range(t_case):
        A, B = input().split()
        c = int(A)+int(B)
        result.append(c)
    
    for l in range(len(result)):
        print("Case #%s: " % (l+1) + str(result[l]))

# A+B 8
def no_11022():

    t_case = int(input())
    A =[]
    B =[]
    result = []

    for x in range(t_case):
        _A, _B = input().split()
        c = int(_A)+int(_B)
        A.append(_A)
        B.append(_B)
        result.append(c)
    
    for l in range(len(result)):
        print("Case #%d: %s + %s = " % ((l+1), A[l], B[l]) + str(result[l]) )


if __name__ == '__main__':
    # no_2557()
    # no_1000()
    # no_2558()
    # no_10950()
    # no_10951()
    # no_10952()
    # no_10953()
    # no_11021()
    no_11022()