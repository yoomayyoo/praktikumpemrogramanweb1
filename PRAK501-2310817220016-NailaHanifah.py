def MaxBilangan(x, y, z, w):
    max = x
    if y > max:
        max = y
    if z > max:
        max = z
    if w > max:
        max = w
    return max

a, b, c, d = map(int, input().split())
hasil = MaxBilangan(a, b, c, d)
print(hasil)