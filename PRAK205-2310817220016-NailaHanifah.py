import math
A = int(input())
B = int(input())
A = float(A)
B = float(B)
C = math.sqrt(B*B - A*A)
alas = C
tinggi = A
keliling = A + B + C
luas = A * C * 1/2
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm^2")