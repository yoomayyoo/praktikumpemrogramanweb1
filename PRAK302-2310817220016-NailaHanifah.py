def konversi_nilai(nilai):
    if nilai >= 80:
        return "A"
    elif 70 <= nilai <= 79:
        return "B"
    elif 60 <= nilai <= 69:
        return "C"
    elif 50 <= nilai <= 59:
        return "D"
    else:
        return "E"

nilai = int(input("Masukkan nilai: "))
print(f"Output: {konversi_nilai(nilai)}")