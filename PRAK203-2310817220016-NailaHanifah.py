a, b, i, j, x, y = map(float, input("Masukkan nilai a, b, i, j, x, y (dipisahkan oleh spasi):"). split())
hasil = (a - b) * i/j - (x+y)
print(f"{hasil:.3f}")