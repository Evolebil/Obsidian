	.file	"hexdump4.cpp"
	.text
	.section	.rodata
.LC0:
	.string	"HEX: %s\n"
	.text
	.globl	_Z5toHexm
	.type	_Z5toHexm, @function
_Z5toHexm:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	$16, -4(%rbp)
	movl	-4(%rbp), %eax
	cltq
	movb	$0, -32(%rbp,%rax)
.L4:
	movq	-40(%rbp), %rax
	andl	$15, %eax
	movl	%eax, -8(%rbp)
	cmpl	$9, -8(%rbp)
	jg	.L2
	movl	-8(%rbp), %eax
	addl	$48, %eax
	movl	%eax, %edx
	jmp	.L3
.L2:
	movl	-8(%rbp), %eax
	addl	$55, %eax
	movl	%eax, %edx
.L3:
	subl	$1, -4(%rbp)
	movl	-4(%rbp), %eax
	cltq
	movb	%dl, -32(%rbp,%rax)
	shrq	$4, -40(%rbp)
	cmpq	$0, -40(%rbp)
	jne	.L4
	movl	-4(%rbp), %eax
	cltq
	leaq	-32(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z5toHexm, .-_Z5toHexm
	.globl	_Z7fromHexPc
	.type	_Z7fromHexPc, @function
_Z7fromHexPc:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	$0, -8(%rbp)
	jmp	.L6
.L10:
	salq	$4, -8(%rbp)
	cmpb	$47, -9(%rbp)
	jle	.L7
	cmpb	$57, -9(%rbp)
	jg	.L7
	movsbl	-9(%rbp), %eax
	subl	$48, %eax
	cltq
	addq	%rax, -8(%rbp)
	jmp	.L6
.L7:
	cmpb	$64, -9(%rbp)
	jle	.L9
	cmpb	$70, -9(%rbp)
	jg	.L9
	movsbl	-9(%rbp), %eax
	subl	$55, %eax
	cltq
	addq	%rax, -8(%rbp)
	jmp	.L6
.L9:
	cmpb	$96, -9(%rbp)
	jle	.L6
	cmpb	$102, -9(%rbp)
	jg	.L6
	movsbl	-9(%rbp), %eax
	subl	$87, %eax
	cltq
	addq	%rax, -8(%rbp)
.L6:
	movq	-24(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -24(%rbp)
	movzbl	(%rax), %eax
	movb	%al, -9(%rbp)
	cmpb	$0, -9(%rbp)
	setne	%al
	testb	%al, %al
	jne	.L10
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_Z7fromHexPc, .-_Z7fromHexPc
	.section	.rodata
	.align 8
.LC1:
	.string	"1. DEC -> HEX\n2. HEX -> DEC\nVybor: "
.LC2:
	.string	"%d"
.LC3:
	.string	"DEC: "
.LC4:
	.string	"%lu"
.LC5:
	.string	"HEX: "
.LC6:
	.string	"%s"
.LC7:
	.string	"DEC: %lu\n"
.LC8:
	.string	"Nepravilnyj vvod"
.LC9:
	.string	"Gotovo!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-4(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-4(%rbp), %eax
	cmpl	$1, %eax
	jne	.L13
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_Z5toHexm
	jmp	.L14
.L13:
	movl	-4(%rbp), %eax
	cmpl	$2, %eax
	jne	.L15
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-48(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_Z7fromHexPc
	movq	%rax, %rsi
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L14
.L15:
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L17
.L14:
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
