; boot.asm
BITS 16
ORG 0x7C00

start:
    ; Load the address of the kernel
    mov ax, 0x9000
    mov es, ax
    mov bx, 0x0000
    mov ah, 0x02
    mov al, 3
    mov ch, 0
    mov dh, 0
    mov cl, 2
    int 0x13

    ; Jump to kernel
    jmp 0x9000:0x0000

; Boot sector signature
times 510 - ($ - $$) db 0
dw 0xAA55

