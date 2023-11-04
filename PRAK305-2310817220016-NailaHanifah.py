def konversi_detik(total_detik):
    if total_detik < 0:
        return "Input tidak valid."
    elif total_detik < 86400:
        jam = total_detik // 3600
        sisa_detik = total_detik % 3600
        menit = sisa_detik // 60
        detik = sisa_detik % 60
        return "{:02d}:{:02d}:{:02d}".format(jam, menit, detik)
    else:
        hari = total_detik // 86400
        sisa_detik_hari = total_detik % 86400
        jam = sisa_detik_hari // 3600
        sisa_detik = sisa_detik_hari % 3600
        menit = sisa_detik // 60
        detik = sisa_detik % 60
        return "{} hari {:02d}:{:02d}:{:02d}".format(hari, jam, menit, detik)

total_detik = int(input("Masukkan jumlah detik: "))
print(konversi_detik(total_detik))
