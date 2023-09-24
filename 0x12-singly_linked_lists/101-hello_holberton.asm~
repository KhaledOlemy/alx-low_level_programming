	extern printf
message:		db "Hello, Holberton", 0
format:			db "%s", 10, 0
	global main
main:
	push	rbp
	mov	rdi,format
	mov	rsi,message
	call	printf
	pop	rbp
	ret
