#include <stdint.h>
#define REGISTERS_COUNT 3

typedef struct {
    /* 汎用レジスタ */
    uint32_t registers[REGISTERS_COUNT];

    /* EFLAGSレジスタ */
    uint32_t eflags;

    /* メモリ(バイト列) */
    uint8_t* memory;

    /* プログラムカウンタ */
    uint32_t eip;
} Emulator;


Emulato* create_emu(size_t, uint32_t eip, uint32_t esp) {
    Emulator
}










