;ehafidi

;rdi = const char *s

global _ft_strdup
extern _malloc
extern _ft_strcpy
extern _ft_strlen

_ft_strdup:
push rdi
call _ft_strlen ; strlen directly on rdi
inc rax ; return value of ft_strlen is in rax
; ... so we increment it to add the \0

mov rdi, rax ; we mov rax to rdi
call _malloc ; then we malloc the size in rdi
cmp rax, 0
je _protecc ; protection du malloc
pop r9 ; we make rdi come back
mov rsi, r9 ; we move rdi as src
mov rdi, rax ; then we mov the string returned by malloc (dest)
; ... in rdi
call _ft_strcpy ; we copy rsi in rdi (src in dest)
ret ; the return value is in rax

_protecc:
mov rax, 0
pop rsi
ret