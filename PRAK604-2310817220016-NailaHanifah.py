def decode_message(code, message):
    decoded_message = ''.join(['*' if message[i] == code[i] and message[i] != ' ' else '#' for i in range(len(message))])
    return decoded_message

def main():
    code = input().rstrip()
    message = input().rstrip()

    if len(code) != len(message):
        print("Panjang kalimat berbeda, pesan palsu")
        return

    decoded_message = decode_message(code, message)
    
    star_count = decoded_message.count('*')
    hash_count = decoded_message.count('#')

    print(decoded_message)
    print(f"* = {star_count}")
    print(f"# = {hash_count}")

    if star_count >= hash_count:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

if __name__ == "__main__":
    main()