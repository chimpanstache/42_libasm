; ehafidi
; rdi =s1
; rsi =s2

;section .text:
global _ft_strcmp

_ft_strcmp:
xor rax, rax
xor rbx, rbx
xor rcx, rcx

;section .bss
;		s1 resd 1 
;		s2 resd 1

_loop: 
mov al, BYTE [rdi]
mov bl, BYTE [rsi]
cmp rax, rbx ; comp *s1 and *s2
jl _end_negative ; if *s1 < *s2, go to end negative
jg _end_positive ; if *s1 > *s2, go to end positive
cmp al, 0 ; comp rdi and \0
je _end_equal ; if rdi == 0, go to end_equal
inc rdi
inc rsi
jmp _loop ; go back to loop

_end_equal:
mov rax, 0 ; make rax == 0
ret ; return 0

_end_negative:
mov rax, -1 ; make rax == -1
ret ; return -1

_end_positive:
mov rax, 1 ; make rax == 1
ret ; ret 1

