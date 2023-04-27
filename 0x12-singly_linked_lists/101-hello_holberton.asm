section .data
    msg db "Hello, Holberton", 10, 0  ; the message to print, with a newline character and a null terminator

section .text
    global main

    extern printf                 ; declare the printf function

main:
    push rbp                      ; save the base pointer
    mov rbp, rsp                  ; set up the stack frame

    sub rsp, 16                   ; allocate space on the stack for the arguments to printf
    mov rdi, msg                  ; set the first argument (format string) to the address of the message
    xor eax, eax                  ; clear eax to indicate that there are no floating-point arguments
    call printf                   ; call printf with the arguments on the stack

    add rsp, 16                   ; clean up the stack
    xor eax, eax                  ; return 0 to indicate success

    mov rsp, rbp                  ; restore the stack pointer
    pop rbp                       ; restore the base pointer
    ret                           ; return to the calling function
