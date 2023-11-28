def reverse(num):
    reversedNum = 0
    while num > 0:
        digit = num % 10
        reversedNum = reversedNum * 10 + digit
        num //= 10
    return reversedNum

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))