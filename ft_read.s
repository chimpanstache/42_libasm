;ehafidi

;rdi = int fd
;rsi = const void *buf
;rdx = size_t count

;section .text:
global _ft_read
extern ___error

_ft_read:
mov rax, 0x2000003 ; sys_write system call
syscall
jc _error
ret 

_error:
push rax ; push the value of rax on the stack, value is an error number set by the syscall
call ___error ; set errno and put that value in rax
mov	 rbx, rax ; move errno in rbx;
pop rax ; take backe the error number
mov  [rbx], rax ; store it in the address of rbx
mov rax, -1
ret