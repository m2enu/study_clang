	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	leaq	L_.str(%rip), %rdi
	movl	$513, %esi              ## imm = 0x201
	xorl	%eax, %eax
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	movl	$1027, %esi             ## imm = 0x403
	xorl	%eax, %eax
	callq	_printf
	leaq	L_.str.2(%rip), %rdi
	movl	$1541, %esi             ## imm = 0x605
	xorl	%eax, %eax
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	movl	$2055, %esi             ## imm = 0x807
	xorl	%eax, %eax
	callq	_printf
	leaq	L_.str.4(%rip), %rdi
	movl	$2569, %esi             ## imm = 0xA09
	xorl	%eax, %eax
	callq	_printf
	leaq	L_.str.5(%rip), %rdi
	movl	$3083, %esi             ## imm = 0xC0B
	xorl	%eax, %eax
	callq	_printf
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"v11 = 0x%04x\n"

L_.str.1:                               ## @.str.1
	.asciz	"v12 = 0x%04x\n"

L_.str.2:                               ## @.str.2
	.asciz	"v21 = 0x%04x\n"

L_.str.3:                               ## @.str.3
	.asciz	"v22 = 0x%04x\n"

L_.str.4:                               ## @.str.4
	.asciz	"v23 = 0x%04x\n"

L_.str.5:                               ## @.str.5
	.asciz	"v24 = 0x%04x\n"


.subsections_via_symbols
