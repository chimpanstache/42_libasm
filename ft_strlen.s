; ehafidi

;rdi == s

;section .text:
global _ft_strlen
	
_ft_strlen:
xor rax, rax ; rax zeroed

_loop:
cmp BYTE [rdi], 0 ; compare if *rdi == \0
je _end ; if rdi[rax] == \0, go to end
inc rdi
inc rax	; increment rax
jmp _loop ; go back to _loop;

_end: 
ret
