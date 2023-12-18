phi = 22/7
r, t = map(float, input().split())
volume = phi * r * 2 * t
luas = 2 * phi * r * (r + t)
keliling = 2 * phi * r
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")
