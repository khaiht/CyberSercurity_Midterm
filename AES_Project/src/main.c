#include "../include/aes.h"

int main() {
    unsigned char key[16] = {
        0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6,
        0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c
    };

    process_file("input/input.txt", "output/encrypted.txt", "debug_logs/encrypt_log.txt", key, encrypt_block);
    process_file("output/encrypted.txt", "output/decrypted.txt", "debug_logs/decrypt_log.txt", key, decrypt_block);

    return 0;
}