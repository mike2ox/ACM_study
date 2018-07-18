__Author__ = 'mike2ox'
__Copyright__ = 'Copyright (c) 2018 Mike2ox All rights reserved.'
__Status__ = 'Done'
__Problem_no__ = 10828



def pushX(x):
    STACK.append(x)

def pop(STACK):
    # TODO : STACK pop기능때문에 다꼬임
    if type(STACK) == 'NoneType':
        print(-1)

    else:
        print(STACK[-1])
        STACK = STACK[:-1]
        return STACK

def top(STACK):
    
    if type(STACK) == 'NoneType':
        print(-1)

    else:
        print(STACK[-1])


    
def size(STACK):
    if type(STACK) == 'NoneType':
        print(0)
    else:
        print(len(STACK))

def empty(STACK):
    if type(STACK) == 'NoneType':
        print(1)

    else:
        print(0)


if __name__ == '__main__':

    # STACK
    STACK = []

    n_commend = int(input())

    while n_commend > 0:
        try:
            command = input()

            if command[:2] == 'pu':
                pushX(command[5:])
            elif command[:2] == 'po':
                STACK = pop(STACK)
            elif command[:2] == 'si':
                size(STACK)
            elif command[:2] == 'em':
                empty(STACK)
            elif command[:2] == 'to':
                top(STACK)
                        
            n_commend -= 1

        except EOFError:
            break