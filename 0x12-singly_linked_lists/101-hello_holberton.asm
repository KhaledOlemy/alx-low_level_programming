	extern printf
message:		db "Hello, Holberton\n", 0
format:			db "%s", 10, 0
	global main
main:
	push	rbp
	mov	rsi,format
	mov	rdi,message
	call	printf
	pop	rbp
	ret
