__Author__ = 'mike2ox'
__Copyright__ = 'Copyright (c) 2018 Mike2ox All rights reserved.'
__Status__ = 'Done. except 11720'
__Problem_no__ = [ 11718,11719,11720,11721]


# 그대로 출력하기
def no_11718():
        
    while True:
        try:
            IO = input()
            print(IO)
            # NOTE : BJO에서 나오는 조건은 다 걸어줘야함. python의 장점의 단점화
            if IO[0] == ' ' or IO[-1] == ' ' or len(IO) > 100:
                break
        except EOFError:
            break

# 그대로 출력하기 2
def no_11719():
        
    while True:
        try:
            IO = input()
            print(IO)
            # NOTE : BJO에서 나오는 조건은 다 걸어줘야함. python의 장점의 단점화
            if len(IO) > 100:
                break
        except EOFError:
            break

# 숫자의 합
def no_11720():
    
    N = 0
    while True:
        try:
            size = int(input())
            for x in range(size):
                a = int(input())
                # TODO : C++과 달리 list에서 한개씩 element접근이 입력과 동시에 안됨.
                
            print(N)

        except EOFError:
            break

# 10개씩 끊어 출력하기
def no_11721():
    while True:
        try:
            word = input()
            for x in range(len(word)//int(10)+1):
                print(word[x*10:(x+1)*10])

        except EOFError:
            break


if __name__ == '__main__':
    # no_11718()
    # no_11719()
    # no_11720()
    # no_11721()