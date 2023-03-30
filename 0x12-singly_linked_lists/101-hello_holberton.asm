section .data
    hello db "Hello, Holberton", 0Ah, 0
    format db "%s"

section .text
    global main
    extern printf

main:
    push format
    push hello
    call printf
    add rsp, 16
    ret
