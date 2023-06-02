section .data
extern printf
msg db "Hello, Holberton", 0
fmt db "%s", 0
newline db 10,0

section .text
global main

main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov esi, newline
        mov edi, fmt
        mov eax, 0
        call printf

	mov eax, 0
	syscall
