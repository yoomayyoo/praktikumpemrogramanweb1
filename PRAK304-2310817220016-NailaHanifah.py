def ejaan_bilangan(n):
    if n == 0:
        return "Nol"
    elif n < 10:
        return "Satuan"
    elif n < 20:
        return "Belasan"
    elif n < 100:
        puluhan = n // 10
        satuan = n % 10
        if satuan == 0:
            return "Puluhan"
        else:
            return "Puluhan"
    else:
        return "Anda Menginput Melebihi Limit Bilangan"

bilangan = int(input("Masukkan bilangan cacah (0-99): "))

print(ejaan_bilangan(bilangan))