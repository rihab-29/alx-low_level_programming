section        .text
       global  main
       extern  printf

main:
       mov     edi, message
       xor     eax, eax
       call    printf
       mov     eax, 0
       ret
section        .data
       message db 'Hello, Holberton', 0x0A, 0x00
