while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    try:
        pilihan = int(input("Masukkan Pilihan: "))
    except ValueError:
        print("Input harus berupa angka. Silakan coba lagi.")
        continue

    if 1 <= pilihan <= 4:
        try:
            nilai_pertama = float(input("Masukkan nilai pertama: "))
            nilai_kedua = float(input("Masukkan nilai kedua: "))
        except ValueError:
            print("Input harus berupa angka. Silakan coba lagi.")
            continue

        if pilihan == 1:
            hasil = nilai_pertama + nilai_kedua
        elif pilihan == 2:
            hasil = nilai_pertama - nilai_kedua
        elif pilihan == 3:
            hasil = nilai_pertama * nilai_kedua
        elif pilihan == 4:
            if nilai_kedua != 0:
                hasil = nilai_pertama / nilai_kedua
            else:
                print("Pembagian oleh nol tidak valid.")
                continue

        print(f"Hasil {pilihan} antara {nilai_pertama:.2f} dan {nilai_kedua:.2f} adalah {hasil:.2f}")
    elif pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Naila Hanifah")
        break
    else:
        print("Input anda salah, silakan coba lagi.")