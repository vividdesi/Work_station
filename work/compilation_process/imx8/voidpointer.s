	.arch armv8-a
	.file	"voidpointer.c"
	.text
	.section	.rodata
	.align	3
.LC0:
	.string	"The value is %d\n"
	.align	3
.LC1:
	.string	"The value is %f\n"
	.align	3
.LC2:
	.string	"The value is %c\n"
	.text
	.align	2
	.global	printvalue
	.type	printvalue, %function
printvalue:
.LFB0:
	.cfi_startproc
	stp	x29, x30, [sp, -32]!
	.cfi_def_cfa_offset 32
	.cfi_offset 29, -32
	.cfi_offset 30, -24
	mov	x29, sp
	str	x0, [sp, 24]
	strb	w1, [sp, 23]
	ldrb	w0, [sp, 23]
	cmp	w0, 105
	beq	.L2
	cmp	w0, 105
	bgt	.L6
	cmp	w0, 99
	beq	.L4
	cmp	w0, 102
	beq	.L5
	b	.L6
.L2:
	ldr	x0, [sp, 24]
	ldr	w0, [x0]
	mov	w1, w0
	adrp	x0, .LC0
	add	x0, x0, :lo12:.LC0
	bl	printf
	b	.L3
.L5:
	ldr	x0, [sp, 24]
	ldr	s0, [x0]
	fcvt	d0, s0
	adrp	x0, .LC1
	add	x0, x0, :lo12:.LC1
	bl	printf
	b	.L3
.L4:
	ldr	x0, [sp, 24]
	ldrb	w0, [x0]
	mov	w1, w0
	adrp	x0, .LC2
	add	x0, x0, :lo12:.LC2
	bl	printf
	nop
.L3:
.L6:
	nop
	ldp	x29, x30, [sp], 32
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE0:
	.size	printvalue, .-printvalue
	.align	2
	.global	main
	.type	main, %function
main:
.LFB1:
	.cfi_startproc
	stp	x29, x30, [sp, -48]!
	.cfi_def_cfa_offset 48
	.cfi_offset 29, -48
	.cfi_offset 30, -40
	mov	x29, sp
	adrp	x0, :got:__stack_chk_guard
	ldr	x0, [x0, #:got_lo12:__stack_chk_guard]
	ldr	x1, [x0]
	str	x1, [sp, 40]
	mov	x1, 0
	mov	w0, 20
	str	w0, [sp, 32]
	mov	w0, 65
	strb	w0, [sp, 31]
	mov	w0, 62915
	movk	w0, 0x4048, lsl 16
	fmov	s0, w0
	str	s0, [sp, 36]
	add	x0, sp, 32
	mov	w1, 105
	bl	printvalue
	add	x0, sp, 31
	mov	w1, 99
	bl	printvalue
	add	x0, sp, 36
	mov	w1, 102
	bl	printvalue
	mov	w0, 0
	mov	w1, w0
	adrp	x0, :got:__stack_chk_guard
	ldr	x0, [x0, #:got_lo12:__stack_chk_guard]
	ldr	x2, [sp, 40]
	ldr	x3, [x0]
	subs	x2, x2, x3
	mov	x3, 0
	beq	.L9
	bl	__stack_chk_fail
.L9:
	mov	w0, w1
	ldp	x29, x30, [sp], 48
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 10.5.0-1ubuntu1~22.04) 10.5.0"
	.section	.note.GNU-stack,"",@progbits
