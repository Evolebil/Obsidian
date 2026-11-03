	.file	"pong.cpp"
	.text
	.local	_ZL8origTerm
	.comm	_ZL8origTerm,60,32
	.local	_ZL2fw
	.comm	_ZL2fw,4,4
	.local	_ZL2fh
	.comm	_ZL2fh,4,4
	.local	_ZL2bx
	.comm	_ZL2bx,4,4
	.local	_ZL2by
	.comm	_ZL2by,4,4
	.local	_ZL2dx
	.comm	_ZL2dx,4,4
	.local	_ZL2dy
	.comm	_ZL2dy,4,4
	.local	_ZL2py
	.comm	_ZL2py,4,4
	.local	_ZL2ay
	.comm	_ZL2ay,4,4
	.local	_ZL2ps
	.comm	_ZL2ps,8,8
	.local	_ZL3as_
	.comm	_ZL3as_,8,8
	.local	_ZL7running
	.comm	_ZL7running,4,4
	.local	_ZL2fb
	.comm	_ZL2fb,8,8
	.type	_ZL9enableRawv, @function
_ZL9enableRawv:
.LFB17:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	_ZL8origTerm(%rip), %rax
	movq	%rax, %rsi
	movl	$0, %edi
	call	tcgetattr@PLT
	movq	_ZL8origTerm(%rip), %rax
	movq	8+_ZL8origTerm(%rip), %rdx
	movq	%rax, -80(%rbp)
	movq	%rdx, -72(%rbp)
	movq	16+_ZL8origTerm(%rip), %rax
	movq	24+_ZL8origTerm(%rip), %rdx
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	32+_ZL8origTerm(%rip), %rax
	movq	40+_ZL8origTerm(%rip), %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	44+_ZL8origTerm(%rip), %rax
	movq	52+_ZL8origTerm(%rip), %rdx
	movq	%rax, -36(%rbp)
	movq	%rdx, -28(%rbp)
	movl	-68(%rbp), %eax
	andl	$-11, %eax
	movl	%eax, -68(%rbp)
	movb	$0, -57(%rbp)
	movb	$0, -58(%rbp)
	leaq	-80(%rbp), %rax
	movq	%rax, %rdx
	movl	$0, %esi
	movl	$0, %edi
	call	tcsetattr@PLT
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L2
	call	__stack_chk_fail@PLT
.L2:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	_ZL9enableRawv, .-_ZL9enableRawv
	.type	_ZL10disableRawv, @function
_ZL10disableRawv:
.LFB18:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	_ZL8origTerm(%rip), %rax
	movq	%rax, %rdx
	movl	$0, %esi
	movl	$0, %edi
	call	tcsetattr@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	_ZL10disableRawv, .-_ZL10disableRawv
	.type	_ZL3putiic, @function
_ZL3putiic:
.LFB19:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, %eax
	movb	%al, -12(%rbp)
	cmpl	$0, -4(%rbp)
	js	.L8
	movl	_ZL2fw(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jge	.L8
	cmpl	$0, -8(%rbp)
	js	.L8
	movl	_ZL2fh(%rip), %eax
	cmpl	%eax, -8(%rbp)
	jge	.L8
	movq	_ZL2fb(%rip), %rdx
	movl	_ZL2fw(%rip), %eax
	addl	$1, %eax
	imull	-8(%rbp), %eax
	movl	%eax, %ecx
	movl	-4(%rbp), %eax
	addl	%ecx, %eax
	cltq
	addq	%rax, %rdx
	movzbl	-12(%rbp), %eax
	movb	%al, (%rdx)
	jmp	.L4
.L8:
	nop
.L4:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	_ZL3putiic, .-_ZL3putiic
	.type	_ZL9resetBalli, @function
_ZL9resetBalli:
.LFB20:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	_ZL2fw(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, _ZL2bx(%rip)
	movl	_ZL2fh(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, _ZL2by(%rip)
	movl	-4(%rbp), %eax
	movl	%eax, _ZL2dx(%rip)
	call	rand@PLT
	movl	%eax, %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$31, %eax
	addl	%eax, %edx
	andl	$1, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	subl	$1, %eax
	movl	%eax, _ZL2dy(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	_ZL9resetBalli, .-_ZL9resetBalli
	.type	_ZL4initv, @function
_ZL4initv:
.LFB21:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-16(%rbp), %rax
	movq	%rax, %rdx
	movl	$21523, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	ioctl@PLT
	movzwl	-14(%rbp), %eax
	movzwl	%ax, %eax
	movl	%eax, _ZL2fw(%rip)
	movzwl	-16(%rbp), %eax
	movzwl	%ax, %eax
	subl	$2, %eax
	movl	%eax, _ZL2fh(%rip)
	movl	_ZL2fh(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, _ZL2py(%rip)
	movl	_ZL2fh(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, _ZL2ay(%rip)
	movq	$0, _ZL2ps(%rip)
	movq	$0, _ZL3as_(%rip)
	movl	$1, _ZL7running(%rip)
	movl	$0, %edi
	call	time@PLT
	movl	%eax, %edi
	call	srand@PLT
	movl	$1, %edi
	call	_ZL9resetBalli
	movl	_ZL2fw(%rip), %eax
	leal	1(%rax), %edx
	movl	_ZL2fh(%rip), %eax
	imull	%edx, %eax
	addl	$1, %eax
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, _ZL2fb(%rip)
	movl	$0, -20(%rbp)
	jmp	.L11
.L12:
	movl	_ZL2fw(%rip), %eax
	cltq
	movq	_ZL2fb(%rip), %rcx
	movl	_ZL2fw(%rip), %edx
	addl	$1, %edx
	imull	-20(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rcx
	movq	%rax, %rdx
	movl	$32, %esi
	movq	%rcx, %rdi
	call	memset@PLT
	movq	_ZL2fb(%rip), %rdx
	movl	_ZL2fw(%rip), %eax
	addl	$1, %eax
	imull	-20(%rbp), %eax
	movl	%eax, %ecx
	movl	_ZL2fw(%rip), %eax
	addl	%ecx, %eax
	cltq
	addq	%rdx, %rax
	movb	$10, (%rax)
	addl	$1, -20(%rbp)
.L11:
	movl	_ZL2fh(%rip), %eax
	cmpl	%eax, -20(%rbp)
	jl	.L12
	movq	_ZL2fb(%rip), %rdx
	movl	_ZL2fw(%rip), %eax
	leal	1(%rax), %ecx
	movl	_ZL2fh(%rip), %eax
	imull	%ecx, %eax
	cltq
	addq	%rdx, %rax
	movb	$0, (%rax)
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L13
	call	__stack_chk_fail@PLT
.L13:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	_ZL4initv, .-_ZL4initv
	.type	_ZL5buildv, @function
_ZL5buildv:
.LFB22:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -8(%rbp)
	jmp	.L15
.L16:
	movl	_ZL2fw(%rip), %eax
	cltq
	movq	_ZL2fb(%rip), %rcx
	movl	_ZL2fw(%rip), %edx
	addl	$1, %edx
	imull	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rcx
	movq	%rax, %rdx
	movl	$32, %esi
	movq	%rcx, %rdi
	call	memset@PLT
	addl	$1, -8(%rbp)
.L15:
	movl	_ZL2fh(%rip), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L16
	movl	$-2, -4(%rbp)
	jmp	.L17
.L18:
	movl	_ZL2py(%rip), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	movl	$124, %edx
	movl	%eax, %esi
	movl	$1, %edi
	call	_ZL3putiic
	movl	_ZL2ay(%rip), %edx
	movl	-4(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movl	_ZL2fw(%rip), %eax
	subl	$2, %eax
	movl	$124, %edx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	_ZL3putiic
	addl	$1, -4(%rbp)
.L17:
	cmpl	$2, -4(%rbp)
	jle	.L18
	movl	_ZL2by(%rip), %ecx
	movl	_ZL2bx(%rip), %eax
	movl	$48, %edx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	_ZL3putiic
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	_ZL5buildv, .-_ZL5buildv
	.section	.rodata
	.align 8
.LC0:
	.string	"Player: %ld  |  AI: %ld  (ESC=exit)"
.LC1:
	.string	"\033[H"
.LC2:
	.string	"\n"
	.text
	.type	_ZL6renderv, @function
_ZL6renderv:
.LFB23:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$224, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	_ZL3as_(%rip), %rcx
	movq	_ZL2ps(%rip), %rdx
	leaq	.LC0(%rip), %rsi
	leaq	-208(%rbp), %rax
	movq	%rcx, %r8
	movq	%rdx, %rcx
	movq	%rsi, %rdx
	movl	$64, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	snprintf@PLT
	movl	%eax, -216(%rbp)
	leaq	.LC1(%rip), %rax
	movl	$3, %edx
	movq	%rax, %rsi
	movl	$1, %edi
	call	write@PLT
	movl	-216(%rbp), %eax
	movslq	%eax, %rdx
	leaq	-208(%rbp), %rax
	movq	%rax, %rsi
	movl	$1, %edi
	call	write@PLT
	movl	_ZL2fw(%rip), %eax
	subl	-216(%rbp), %eax
	movl	%eax, -212(%rbp)
	cmpl	$0, -212(%rbp)
	jle	.L20
	movl	-212(%rbp), %eax
	movslq	%eax, %rdx
	leaq	-144(%rbp), %rax
	movl	$32, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movl	-212(%rbp), %eax
	movslq	%eax, %rdx
	leaq	-144(%rbp), %rax
	movq	%rax, %rsi
	movl	$1, %edi
	call	write@PLT
.L20:
	leaq	.LC2(%rip), %rax
	movl	$1, %edx
	movq	%rax, %rsi
	movl	$1, %edi
	call	write@PLT
	movl	_ZL2fw(%rip), %eax
	leal	1(%rax), %edx
	movl	_ZL2fh(%rip), %eax
	imull	%edx, %eax
	movslq	%eax, %rdx
	movq	_ZL2fb(%rip), %rax
	movq	%rax, %rsi
	movl	$1, %edi
	call	write@PLT
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L21
	call	__stack_chk_fail@PLT
.L21:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	_ZL6renderv, .-_ZL6renderv
	.type	_ZL5inputv, @function
_ZL5inputv:
.LFB24:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -12(%rbp)
	leaq	-12(%rbp), %rax
	movl	$3, %edx
	movq	%rax, %rsi
	movl	$0, %edi
	call	read@PLT
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	jle	.L30
	cmpq	$1, -24(%rbp)
	jne	.L25
	movzbl	-12(%rbp), %eax
	cmpb	$27, %al
	jne	.L25
	movl	$0, _ZL7running(%rip)
	jmp	.L22
.L25:
	cmpq	$3, -24(%rbp)
	jne	.L22
	movzbl	-12(%rbp), %eax
	cmpb	$27, %al
	jne	.L22
	movzbl	-11(%rbp), %eax
	cmpb	$91, %al
	jne	.L22
	movzbl	-10(%rbp), %eax
	cmpb	$65, %al
	jne	.L27
	movl	_ZL2py(%rip), %eax
	subl	$1, %eax
	movl	%eax, _ZL2py(%rip)
	movl	_ZL2py(%rip), %eax
	cmpl	$1, %eax
	jg	.L27
	movl	$2, _ZL2py(%rip)
.L27:
	movzbl	-10(%rbp), %eax
	cmpb	$66, %al
	jne	.L22
	movl	_ZL2py(%rip), %eax
	addl	$1, %eax
	movl	%eax, _ZL2py(%rip)
	movl	_ZL2py(%rip), %eax
	leal	2(%rax), %edx
	movl	_ZL2fh(%rip), %eax
	cmpl	%eax, %edx
	jl	.L22
	movl	_ZL2fh(%rip), %eax
	subl	$3, %eax
	movl	%eax, _ZL2py(%rip)
	jmp	.L22
.L30:
	nop
.L22:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L29
	call	__stack_chk_fail@PLT
.L29:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	_ZL5inputv, .-_ZL5inputv
	.local	_ZZL8updateAivE5frame
	.comm	_ZZL8updateAivE5frame,4,4
	.type	_ZL8updateAiv, @function
_ZL8updateAiv:
.LFB25:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	_ZZL8updateAivE5frame(%rip), %eax
	addl	$1, %eax
	movl	%eax, _ZZL8updateAivE5frame(%rip)
	movl	_ZZL8updateAivE5frame(%rip), %eax
	andl	$1, %eax
	andl	$1, %eax
	testb	%al, %al
	jne	.L35
	movl	_ZL2by(%rip), %edx
	movl	_ZL2ay(%rip), %eax
	cmpl	%eax, %edx
	jge	.L34
	movl	_ZL2ay(%rip), %eax
	cmpl	$2, %eax
	jle	.L34
	movl	_ZL2ay(%rip), %eax
	subl	$1, %eax
	movl	%eax, _ZL2ay(%rip)
.L34:
	movl	_ZL2by(%rip), %edx
	movl	_ZL2ay(%rip), %eax
	cmpl	%eax, %edx
	jle	.L31
	movl	_ZL2ay(%rip), %eax
	leal	2(%rax), %edx
	movl	_ZL2fh(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, %edx
	jge	.L31
	movl	_ZL2ay(%rip), %eax
	addl	$1, %eax
	movl	%eax, _ZL2ay(%rip)
	jmp	.L31
.L35:
	nop
.L31:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE25:
	.size	_ZL8updateAiv, .-_ZL8updateAiv
	.local	_ZZL10updateBallvE5frame
	.comm	_ZZL10updateBallvE5frame,4,4
	.type	_ZL10updateBallv, @function
_ZL10updateBallv:
.LFB26:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	_ZZL10updateBallvE5frame(%rip), %eax
	addl	$1, %eax
	movl	%eax, _ZZL10updateBallvE5frame(%rip)
	movl	_ZZL10updateBallvE5frame(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	setne	%al
	testb	%al, %al
	jne	.L45
	movl	_ZL2bx(%rip), %edx
	movl	_ZL2dx(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
	movl	_ZL2by(%rip), %edx
	movl	_ZL2dy(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jns	.L39
	movl	$0, -12(%rbp)
	movl	_ZL2dy(%rip), %eax
	negl	%eax
	movl	%eax, _ZL2dy(%rip)
.L39:
	movl	_ZL2fh(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L40
	movl	_ZL2fh(%rip), %eax
	subl	$1, %eax
	movl	%eax, -12(%rbp)
	movl	_ZL2dy(%rip), %eax
	negl	%eax
	movl	%eax, _ZL2dy(%rip)
.L40:
	cmpl	$2, -16(%rbp)
	jg	.L41
	movl	_ZL2dx(%rip), %eax
	testl	%eax, %eax
	jns	.L41
	movl	_ZL2py(%rip), %eax
	subl	$2, %eax
	cmpl	%eax, -12(%rbp)
	jl	.L41
	movl	_ZL2py(%rip), %eax
	addl	$2, %eax
	cmpl	%eax, -12(%rbp)
	jg	.L41
	movl	_ZL2dx(%rip), %eax
	negl	%eax
	movl	%eax, _ZL2dx(%rip)
	movl	$3, -16(%rbp)
	call	rand@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1431655766, %rax, %rax
	shrq	$32, %rax
	movq	%rax, %rdx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	leal	-1(%rdx), %eax
	movl	%eax, -8(%rbp)
	cmpl	$0, -8(%rbp)
	je	.L41
	movl	-8(%rbp), %eax
	movl	%eax, _ZL2dy(%rip)
.L41:
	movl	_ZL2fw(%rip), %eax
	subl	$3, %eax
	cmpl	%eax, -16(%rbp)
	jl	.L42
	movl	_ZL2dx(%rip), %eax
	testl	%eax, %eax
	jle	.L42
	movl	_ZL2ay(%rip), %eax
	subl	$2, %eax
	cmpl	%eax, -12(%rbp)
	jl	.L42
	movl	_ZL2ay(%rip), %eax
	addl	$2, %eax
	cmpl	%eax, -12(%rbp)
	jg	.L42
	movl	_ZL2dx(%rip), %eax
	negl	%eax
	movl	%eax, _ZL2dx(%rip)
	movl	_ZL2fw(%rip), %eax
	subl	$4, %eax
	movl	%eax, -16(%rbp)
	call	rand@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1431655766, %rax, %rax
	shrq	$32, %rax
	movq	%rax, %rdx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	leal	-1(%rdx), %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	je	.L42
	movl	-4(%rbp), %eax
	movl	%eax, _ZL2dy(%rip)
.L42:
	cmpl	$0, -16(%rbp)
	jns	.L43
	movq	_ZL3as_(%rip), %rax
	addq	$1, %rax
	movq	%rax, _ZL3as_(%rip)
	movl	$1, %edi
	call	_ZL9resetBalli
	jmp	.L36
.L43:
	movl	_ZL2fw(%rip), %eax
	cmpl	%eax, -16(%rbp)
	jl	.L44
	movq	_ZL2ps(%rip), %rax
	addq	$1, %rax
	movq	%rax, _ZL2ps(%rip)
	movl	$-1, %edi
	call	_ZL9resetBalli
	jmp	.L36
.L44:
	movl	-16(%rbp), %eax
	movl	%eax, _ZL2bx(%rip)
	movl	-12(%rbp), %eax
	movl	%eax, _ZL2by(%rip)
	jmp	.L36
.L45:
	nop
.L36:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE26:
	.size	_ZL10updateBallv, .-_ZL10updateBallv
	.section	.rodata
.LC3:
	.base64	"G1s/MjVsG1syShtbSAA="
.LC4:
	.string	"\033[?25h"
.LC5:
	.base64	"G1syShtbSAA="
	.align 8
.LC6:
	.string	"Game over!\nPlayer: %ld  |  AI: %ld\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB27:
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
	call	_ZL9enableRawv
	call	_ZL4initv
	leaq	.LC3(%rip), %rax
	movl	$11, %edx
	movq	%rax, %rsi
	movl	$1, %edi
	call	write@PLT
	jmp	.L47
.L48:
	call	_ZL5inputv
	call	_ZL8updateAiv
	call	_ZL10updateBallv
	call	_ZL5buildv
	call	_ZL6renderv
	movl	$16000, %edi
	call	usleep@PLT
.L47:
	movl	_ZL7running(%rip), %eax
	testl	%eax, %eax
	jne	.L48
	leaq	.LC4(%rip), %rax
	movl	$6, %edx
	movq	%rax, %rsi
	movl	$1, %edi
	call	write@PLT
	call	_ZL10disableRawv
	movq	_ZL2fb(%rip), %rax
	movq	%rax, %rdi
	call	free@PLT
	leaq	.LC5(%rip), %rax
	movl	$7, %edx
	movq	%rax, %rsi
	movl	$1, %edi
	call	write@PLT
	movq	_ZL3as_(%rip), %rcx
	movq	_ZL2ps(%rip), %rdx
	leaq	.LC6(%rip), %rsi
	leaq	-80(%rbp), %rax
	movq	%rcx, %r8
	movq	%rdx, %rcx
	movq	%rsi, %rdx
	movl	$64, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	snprintf@PLT
	movl	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rdx
	leaq	-80(%rbp), %rax
	movq	%rax, %rsi
	movl	$1, %edi
	call	write@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L50
	call	__stack_chk_fail@PLT
.L50:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE27:
	.size	main, .-main
	.ident	"GCC: (GNU) 15.2.1 20260209"
	.section	.note.GNU-stack,"",@progbits
