	.file	"HexDump+.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"=====================\n     Hex Dump+\n=====================\n 1. DEC -> HEX\n 2. DEC -> OCT\n 3. DEC -> BIN\n 4. HEX -> DEC\n 5. OCT -> DEC\n 6. BIN -> DEC\n 0. Vyhod\n=====================\nVybor: "
.LC1:
	.string	"%d"
.LC2:
	.string	"DEC: "
.LC3:
	.string	"%ld"
.LC4:
	.string	"HEX: %lX\n"
.LC5:
	.string	"OCT: %lo\n"
.LC6:
	.string	"BIN: "
.LC7:
	.string	"HEX: "
.LC8:
	.string	"%s"
.LC9:
	.string	"DEC: %ld\n"
.LC10:
	.string	"OCT: "
.LC11:
	.string	"Nepravilnyj vvod"
.LC12:
	.string	"Gotovo!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB17:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-96(%rbp), %rax
	leaq	.LC1(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-96(%rbp), %eax
	testl	%eax, %eax
	jne	.L2
	movl	$0, %eax
	jmp	.L16
.L2:
	movl	-96(%rbp), %eax
	cmpl	$6, %eax
	je	.L4
	cmpl	$6, %eax
	jg	.L5
	cmpl	$5, %eax
	je	.L6
	cmpl	$5, %eax
	jg	.L5
	cmpl	$4, %eax
	je	.L7
	cmpl	$4, %eax
	jg	.L5
	cmpl	$3, %eax
	je	.L8
	cmpl	$3, %eax
	jg	.L5
	cmpl	$1, %eax
	je	.L9
	cmpl	$2, %eax
	je	.L10
	jmp	.L5
.L9:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-88(%rbp), %rax
	leaq	.LC3(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movq	-88(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L11
.L10:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-88(%rbp), %rax
	leaq	.LC3(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movq	-88(%rbp), %rax
	leaq	.LC5(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L11
.L8:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-88(%rbp), %rax
	leaq	.LC3(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$63, -92(%rbp)
	jmp	.L12
.L15:
	movq	-88(%rbp), %rdx
	movl	-92(%rbp), %eax
	movl	%eax, %ecx
	sarq	%cl, %rdx
	movq	%rdx, %rax
	andl	$1, %eax
	testq	%rax, %rax
	jne	.L13
	cmpl	$0, -92(%rbp)
	jne	.L14
.L13:
	movq	-88(%rbp), %rdx
	movl	-92(%rbp), %eax
	movl	%eax, %ecx
	sarq	%cl, %rdx
	movq	%rdx, %rax
	andl	$1, %eax
	movq	%rax, %rdx
	leaq	.LC3(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L14:
	subl	$1, -92(%rbp)
.L12:
	cmpl	$0, -92(%rbp)
	jns	.L15
	movl	$10, %edi
	call	putchar@PLT
	jmp	.L11
.L7:
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-80(%rbp), %rax
	leaq	.LC8(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	-80(%rbp), %rax
	movl	$16, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	__isoc23_strtol@PLT
	movq	%rax, %rdx
	leaq	.LC9(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L11
.L6:
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-80(%rbp), %rax
	leaq	.LC8(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	-80(%rbp), %rax
	movl	$8, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	__isoc23_strtol@PLT
	movq	%rax, %rdx
	leaq	.LC9(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L11
.L4:
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-80(%rbp), %rax
	leaq	.LC8(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	-80(%rbp), %rax
	movl	$2, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	__isoc23_strtol@PLT
	movq	%rax, %rdx
	leaq	.LC9(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L11
.L5:
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L16
.L11:
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
.L16:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L17
	call	__stack_chk_fail@PLT
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	main, .-main
	.ident	"GCC: (GNU) 15.2.1 20260209"
	.section	.note.GNU-stack,"",@progbits
