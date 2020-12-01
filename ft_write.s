;ehafidi
;rdi = int fd
;rsi = const void *buf
;rdx = size t count

;section .text:
global _ft_write
extern ___error

_ft_write:
mov rax, 0x2000004 ; sys_write system call
syscall
jc _error ;check for error
ret 

_error:
push rax ;push the value of rax on stack, value is an error number set by the syscall
call ___error ; set errno, put that value in rax
mov	 rbx, rax ; move errno in rbx
pop rax ; take back the error number we pushed
mov  [rbx], rax ; move it into the address of rbx
mov rax, -1
ret