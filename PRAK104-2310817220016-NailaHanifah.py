harga_sepatu_A = 400000
harga_sepatu_B = 350000
diskon_sepatu_A = 13
harga_diskon_A = harga_sepatu_A - (harga_sepatu_A * diskon_sepatu_A / 100)
diskon_sepatu_B = 21
harga_diskon_B = harga_sepatu_B - (harga_sepatu_B * diskon_sepatu_B / 100)
print("Harga sepatu A adalah", harga_sepatu_A)
print("Harga sepatu B adalah", harga_sepatu_B)
print(f"Sepatu A mendapat diskon {diskon_sepatu_A}% sehingga harganya menjadi {harga_diskon_A}")
print(f"Sepatu B mendapat diskon {diskon_sepatu_B}% sehingga harganya menjadi {harga_diskon_B}")