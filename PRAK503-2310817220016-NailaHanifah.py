def temukan_terbesar_terkecil(bilangan):
    maks = float('-inf')  
    minim = float('inf')  

    for nilai in bilangan:
        maks = max(maks, nilai)
        minim = min(minim, nilai)

    return maks, minim

def main():
    bilangan = int(input())
    data = list(map(int, input().split()))

    maks, minim = temukan_terbesar_terkecil(data)
    print(f"{maks} {minim}")

if __name__ == "__main__":
    main()