def Biodata(tahun_lahir, nama, asal):
    tahun_sekarang = 2023
    usia = tahun_sekarang - tahun_lahir

    print(f"Perkenalkan Nama Saya : {nama}")
    print(f"Umur Saya : {usia}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {asal}")

def main():
    tahun_lahir = int(input())
    nama = input()
    asal = input()
    Biodata(tahun_lahir, nama, asal)

if __name__ == "__main__":
    main()