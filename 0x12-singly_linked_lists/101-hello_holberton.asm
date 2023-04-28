section        .text
       global  main
       extern  printf

main
       mov     edi, message
       mov     eax, 0
       xor     eax, eax
       call    printf
       ret
section        .data
       mesage db 'Hello, Holberton', 0xa, 0
