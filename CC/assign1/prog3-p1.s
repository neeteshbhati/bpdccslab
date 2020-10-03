	.file	"prog3.c"
# GNU C99 (GCC) version 7.3.1 20180303 (Red Hat 7.3.1-5) (x86_64-redhat-linux)
#	compiled by GNU C version 7.3.1 20180303 (Red Hat 7.3.1-5), GMP version 6.0.0, MPFR version 3.1.1, MPC version 1.0.1, isl version none
# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed:  -imultilib 32 prog3.c -m32 -mtune=generic -march=i686
# -auxbase-strip prog3-p1.s -std=c99 -fverbose-asm
# options enabled:  -faggressive-loop-optimizations
# -fasynchronous-unwind-tables -fauto-inc-dec -fchkp-check-incomplete-type
# -fchkp-check-read -fchkp-check-write -fchkp-instrument-calls
# -fchkp-narrow-bounds -fchkp-optimize -fchkp-store-bounds
# -fchkp-use-static-bounds -fchkp-use-static-const-bounds
# -fchkp-use-wrappers -fcommon -fdelete-null-pointer-checks
# -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
# -ffp-int-builtin-inexact -ffunction-cse -fgcse-lm -fgnu-runtime
# -fgnu-unique -fident -finline-atomics -fira-hoist-pressure
# -fira-share-save-slots -fira-share-spill-slots -fivopts
# -fkeep-static-consts -fleading-underscore -flifetime-dse
# -flto-odr-type-merging -fmath-errno -fmerge-debug-strings
# -fpcc-struct-return -fpeephole -fplt -fprefetch-loop-arrays
# -fsched-critical-path-heuristic -fsched-dep-count-heuristic
# -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
# -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
# -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
# -fshow-column -fshrink-wrap-separate -fsigned-zeros
# -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
# -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math -ftree-cselim
# -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop
# -ftree-reassoc -ftree-scev-cprop -funit-at-a-time -funwind-tables
# -fverbose-asm -fzero-initialized-in-bss -m32 -m80387 -m96bit-long-double
# -malign-stringops -mavx256-split-unaligned-load
# -mavx256-split-unaligned-store -mfancy-math-387 -mfp-ret-in-387 -mglibc
# -mieee-fp -mlong-double-80 -mno-red-zone -mno-sse4 -mpush-args -msahf
# -mstv -mtls-direct-seg-refs -mvzeroupper

	.text
	.globl	a
	.data
	.align 4
	.type	a, @object
	.size	a, 4
a:
	.long	5
	.globl	b
	.align 4
	.type	b, @object
	.size	b, 4
b:
	.long	3
	.comm	c,4,4
	.section	.rodata
.LC0:
	.string	"c = %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	leal	4(%esp), %ecx	#,
	.cfi_def_cfa 1, 0
	andl	$-16, %esp	#,
	pushl	-4(%ecx)	#
	pushl	%ebp	#
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp	#,
	pushl	%ecx	#
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$4, %esp	#,
# prog3.c:8: 	c = SQR(a);
	movl	a, %edx	# a, a.0_1
	movl	a, %eax	# a, a.1_2
	imull	%edx, %eax	# a.0_1, _3
	movl	%eax, c	# _3, c
# prog3.c:9: 	printf("c = %d\n",c);
	movl	c, %eax	# c, c.2_4
	subl	$8, %esp	#,
	pushl	%eax	# c.2_4
	pushl	$.LC0	#
	call	printf	#
	addl	$16, %esp	#,
# prog3.c:10: 	c = SQR(a+b);
	movl	b, %eax	# b, b.3_5
	leal	1(%eax), %edx	#, _6
	movl	a, %eax	# a, a.4_7
	imull	%eax, %edx	# a.4_7, _8
	movl	b, %eax	# b, b.5_9
	addl	%edx, %eax	# _8, _10
	movl	%eax, c	# _10, c
# prog3.c:11: 	printf("c = %d\n",c);
	movl	c, %eax	# c, c.6_11
	subl	$8, %esp	#,
	pushl	%eax	# c.6_11
	pushl	$.LC0	#
	call	printf	#
	addl	$16, %esp	#,
	movl	$0, %eax	#, _17
# prog3.c:13: }
	movl	-4(%ebp), %ecx	#,
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp	#,
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 7.3.1 20180303 (Red Hat 7.3.1-5)"
	.section	.note.GNU-stack,"",@progbits
