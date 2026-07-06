import random


def number():
    print("введите верхнюю границу(больше 1):", end=" ")
    n = int(input())
    if n == 0:
        return 0
    print(random.randint(1, n), end=" ")
    print()
    number()



print("если захотите остановить выведение чисел, введите 0", end=" ")

number()
