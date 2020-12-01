; ehafidi

; rdi == dest 
; rsi == src
global _ft_strcpy
;extern _printf

_ft_strcpy:	
xor rax, rax ; rax zeroed 
xor rbx, rbx

_loop:
cmp BYTE [rsi + rbx], 0 ; compare if rsi == \0
je _end ; if rdi == \0, go to end
mov rax, [rsi + rbx] ; move the character in rsi to rax
mov [rdi + rbx], rax ; move the character in rax to rdi
inc rbx
;inc rsi ; increment rsi
;inc rdi ; increment rdi
jmp _loop ; go back to beginning of the loop


_end:
;mov rdi], BYTE [rsi] ; move the character in rsi to rax
;mov rdi , 0 ; move the character in rax to rdi
mov rax, 0
mov [rdi + rbx], rax ; move the character in rax to rdi
mov rax, rdi ; make rax point to rdi 
ret ; return (rax) dest
