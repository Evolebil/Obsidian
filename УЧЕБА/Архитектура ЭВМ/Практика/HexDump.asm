	.file	"HexDump.c"
	.text
	.section	.rodata
.LC0:
	.string	"%d: "
.LC2:
	.string	".."
.LC3:
	.string	"    |"
.LC4:
	.string	"|"
.LC1:
	.string	"0123456789ABCDEF"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$1, -28(%rbp)
	movl	$0, -24(%rbp)
	movl	-28(%rbp), %eax
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L4
	movl	$0, %eax
	jmp	.L3
.L6:
	movl	-24(%rbp), %eax
	addl	$1, %eax
	cmpl	%eax, -28(%rbp)
	jg	.L5
	addl	$1, -28(%rbp)
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	realloc@PLT
	movq	%rax, -8(%rbp)
.L5:
	movl	-24(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -24(%rbp)
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movzbl	-29(%rbp), %eax
	movb	%al, (%rdx)
.L4:
	call	getchar@PLT
	movb	%al, -29(%rbp)
	cmpb	$10, -29(%rbp)
	jne	.L6
	movl	-24(%rbp), %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	movl	$0, -20(%rbp)
	jmp	.L7
.L16:
	movl	-20(%rbp), %eax
	leaq	.LC0(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -16(%rbp)
	jmp	.L8
.L11:
	movl	-20(%rbp), %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -24(%rbp)
	jle	.L9
	movl	-20(%rbp), %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	shrb	$4, %al
	movzbl	%al, %eax
	cltq
	leaq	.LC1(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	putchar@PLT
	movl	-20(%rbp), %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	andl	$15, %eax
	cltq
	leaq	.LC1(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	putchar@PLT
	movl	$32, %edi
	call	putchar@PLT
	jmp	.L10
.L9:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$32, %edi
	call	putchar@PLT
.L10:
	addl	$1, -16(%rbp)
.L8:
	cmpl	$7, -16(%rbp)
	jle	.L11
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -12(%rbp)
	jmp	.L12
.L15:
	movl	-20(%rbp), %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -24(%rbp)
	jle	.L13
	movl	-20(%rbp), %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, %edi
	call	putchar@PLT
	jmp	.L14
.L13:
	movl	$46, %edi
	call	putchar@PLT
.L14:
	addl	$1, -12(%rbp)
.L12:
	cmpl	$7, -12(%rbp)
	jle	.L15
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	addl	$8, -20(%rbp)
.L7:
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jl	.L16
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	movl	$0, %eax
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (GNU) 15.2.1 20260209"
	.section	.note.GNU-stack,"",@progbits
