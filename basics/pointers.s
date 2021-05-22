	.file	"pointers.c"
 # GNU C17 (GCC) version 10.2.0 (x86_64-pc-cygwin)
 #	compiled by GNU C version 10.2.0, GMP version 6.2.0, MPFR version 4.1.0, MPC version 1.1.0, isl version isl-0.22.1-GMP

 # warning: GMP header version 6.2.0 differs from library version 6.2.1.
 # warning: MPC header version 1.1.0 differs from library version 1.2.1.
 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: 
 # -idirafter /usr/lib/gcc/x86_64-pc-cygwin/10/../../../../lib/../include/w32api
 # -idirafter /usr/lib/gcc/x86_64-pc-cygwin/10/../../../../x86_64-pc-cygwin/lib/../lib/../../include/w32api
 # pointers.c -mtune=generic -march=x86-64 -O2 -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations -falign-functions
 # -falign-jumps -falign-labels -falign-loops -fallocation-dce
 # -fasynchronous-unwind-tables -fauto-inc-dec -fbranch-count-reg
 # -fcaller-saves -fcode-hoisting -fcombine-stack-adjustments
 # -fcompare-elim -fcprop-registers -fcrossjumping -fcse-follow-jumps
 # -fdefer-pop -fdelete-null-pointer-checks -fdevirtualize
 # -fdevirtualize-speculatively -fdwarf2-cfi-asm -fearly-inlining
 # -feliminate-unused-debug-symbols -feliminate-unused-debug-types
 # -fexpensive-optimizations -fforward-propagate -ffp-int-builtin-inexact
 # -ffunction-cse -fgcse -fgcse-lm -fgnu-unique -fguess-branch-probability
 # -fhoist-adjacent-loads -fident -fif-conversion -fif-conversion2
 # -findirect-inlining -finline -finline-atomics -finline-functions
 # -finline-functions-called-once -finline-small-functions -fipa-bit-cp
 # -fipa-cp -fipa-icf -fipa-icf-functions -fipa-icf-variables -fipa-profile
 # -fipa-pure-const -fipa-ra -fipa-reference -fipa-reference-addressable
 # -fipa-sra -fipa-stack-alignment -fipa-vrp -fira-hoist-pressure
 # -fira-share-save-slots -fira-share-spill-slots
 # -fisolate-erroneous-paths-dereference -fivopts -fkeep-inline-dllexport
 # -fkeep-static-consts -fleading-underscore -flifetime-dse -flra-remat
 # -fmath-errno -fmerge-constants -fmerge-debug-strings
 # -fmove-loop-invariants -fomit-frame-pointer -foptimize-sibling-calls
 # -foptimize-strlen -fpartial-inlining -fpeephole -fpeephole2 -fpic -fplt
 # -fprefetch-loop-arrays -free -freg-struct-return -freorder-blocks
 # -freorder-blocks-and-partition -freorder-functions
 # -frerun-cse-after-loop -fsched-critical-path-heuristic
 # -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
 # -fsched-last-insn-heuristic -fsched-rank-heuristic -fsched-spec
 # -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-fusion
 # -fschedule-insns2 -fsemantic-interposition -fset-stack-executable
 # -fshow-column -fshrink-wrap -fshrink-wrap-separate -fsigned-zeros
 # -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-backprop -fssa-phiopt
 # -fstdarg-opt -fstore-merging -fstrict-aliasing
 # -fstrict-volatile-bitfields -fsync-libcalls -fthread-jumps
 # -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp
 # -ftree-builtin-call-dce -ftree-ccp -ftree-ch -ftree-coalesce-vars
 # -ftree-copy-prop -ftree-cselim -ftree-dce -ftree-dominator-opts
 # -ftree-dse -ftree-forwprop -ftree-fre -ftree-loop-distribute-patterns
 # -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
 # -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
 # -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
 # -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
 # -ftree-vrp -funit-at-a-time -funwind-tables -fverbose-asm
 # -fzero-initialized-in-bss -m128bit-long-double -m64 -m80387
 # -maccumulate-outgoing-args -malign-double -malign-stringops
 # -mavx256-split-unaligned-load -mavx256-split-unaligned-store
 # -mfancy-math-387 -mfentry -mfp-ret-in-387 -mfxsr -mieee-fp
 # -mlong-double-80 -mmmx -mno-sse4 -mpush-args -mred-zone -msse -msse2
 # -mstack-arg-probe -mstackrealign -mvzeroupper

	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "First Section:\12\0"
.LC1:
	.ascii "No pointer: %d\12\0"
.LC2:
	.ascii "With pointer: %d\12\0"
	.align 8
.LC3:
	.ascii "Pointer value: %d. Address of \"a\" pointed by p: %d\12\0"
.LC4:
	.ascii "\12Second Section:\12\0"
.LC5:
	.ascii "Regular Array Access:\0"
.LC6:
	.ascii "%d\12\0"
.LC7:
	.ascii "\12Pointer Stack Array Access:\0"
.LC8:
	.ascii "\12Third Section:\12\0"
.LC9:
	.ascii "\12Pointer Heap Array Access:\0"
.LC10:
	.ascii "\12Pointer Sizes:\0"
	.section	.text.startup,"x"
	.p2align 4
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%r12	 #
	.seh_pushreg	%r12
	pushq	%rdi	 #
	.seh_pushreg	%rdi
	pushq	%rsi	 #
	.seh_pushreg	%rsi
	pushq	%rbx	 #
	.seh_pushreg	%rbx
	subq	$88, %rsp	 #,
	.seh_stackalloc	88
	.seh_endprologue
 # pointers.c:62:     printf("%d\n", arr[i]);
	leaq	.LC6(%rip), %r12	 #, tmp113
 # pointers.c:9: int main(int argc, char const *argv[]) {
	call	__main	 #
	leaq	48(%rsp), %rbx	 #, ivtmp.48
	leaq	68(%rsp), %rdi	 #, _86
 # pointers.c:37:   int a = 10;
	movl	$10, 44(%rsp)	 #, a
 # pointers.c:44:   printf("First Section:\n\n");
	leaq	.LC0(%rip), %rcx	 #,
 # pointers.c:60:   printf("Regular Array Access:\n");
	movq	%rbx, %rsi	 # ivtmp.48, ivtmp.66
 # pointers.c:44:   printf("First Section:\n\n");
	call	puts	 #
 # pointers.c:45:   printf("No pointer: %d\n", a);
	movl	44(%rsp), %edx	 # a,
	leaq	.LC1(%rip), %rcx	 #,
	call	printf	 #
 # pointers.c:46:   printf("With pointer: %d\n", *p);
	movl	44(%rsp), %edx	 # a,
	leaq	.LC2(%rip), %rcx	 #,
	call	printf	 #
 # pointers.c:48:   printf("Pointer value: %d. Address of \"a\" pointed by p: %d\n", p, &a);
	leaq	44(%rsp), %rdx	 #, tmp103
	leaq	.LC3(%rip), %rcx	 #,
	movq	%rdx, %r8	 # tmp103,
	call	printf	 #
 # pointers.c:58:   printf("\nSecond Section:\n\n");
	leaq	.LC4(%rip), %rcx	 #,
 # pointers.c:50:   int arr[] = {1, 2, 3, 4, 5};
	movabsq	$8589934593, %rax	 #, tmp115
	movl	$5, 64(%rsp)	 #, arr[4]
	movq	%rax, 48(%rsp)	 # tmp115, MEM <unsigned long> [(int *)&arr]
	movabsq	$17179869187, %rax	 #, tmp116
	movq	%rax, 56(%rsp)	 # tmp116, MEM <unsigned long> [(int *)&arr + 8B]
 # pointers.c:58:   printf("\nSecond Section:\n\n");
	call	puts	 #
 # pointers.c:60:   printf("Regular Array Access:\n");
	leaq	.LC5(%rip), %rcx	 #,
	call	puts	 #
	movl	$1, %edx	 #, pretmp_15
	jmp	.L3	 #
	.p2align 4,,10
	.p2align 3
.L9:
 # pointers.c:62:     printf("%d\n", arr[i]);
	movl	(%rsi), %edx	 # MEM[base: _87, offset: 0B], pretmp_15
.L3:
 # pointers.c:62:     printf("%d\n", arr[i]);
	movq	%r12, %rcx	 # tmp113,
 # pointers.c:61:   for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
	addq	$4, %rsi	 #, ivtmp.66
 # pointers.c:62:     printf("%d\n", arr[i]);
	call	printf	 #
 # pointers.c:61:   for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
	cmpq	%rdi, %rsi	 # _86, ivtmp.66
	jne	.L9	 #,
 # pointers.c:65:   printf("\nPointer Stack Array Access:\n");
	leaq	.LC7(%rip), %rcx	 #,
 # pointers.c:67:     printf("%d\n", p1[i]); // No need of preceding asterisk on p1[n] (throws error)
	leaq	.LC6(%rip), %rsi	 #, tmp112
 # pointers.c:65:   printf("\nPointer Stack Array Access:\n");
	call	puts	 #
	movl	$1, %edx	 #, pretmp_72
	jmp	.L5	 #
	.p2align 4,,10
	.p2align 3
.L10:
 # pointers.c:67:     printf("%d\n", p1[i]); // No need of preceding asterisk on p1[n] (throws error)
	movl	(%rbx), %edx	 # MEM[base: _81, offset: 0B], pretmp_72
.L5:
 # pointers.c:67:     printf("%d\n", p1[i]); // No need of preceding asterisk on p1[n] (throws error)
	movq	%rsi, %rcx	 # tmp112,
 # pointers.c:66:   for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
	addq	$4, %rbx	 #, ivtmp.48
 # pointers.c:67:     printf("%d\n", p1[i]); // No need of preceding asterisk on p1[n] (throws error)
	call	printf	 #
 # pointers.c:66:   for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
	cmpq	%rdi, %rbx	 # _86, ivtmp.48
	jne	.L10	 #,
 # pointers.c:70:   printf("\nThird Section:\n\n");
	leaq	.LC8(%rip), %rcx	 #,
 # pointers.c:84:     printf("%d\n", p2[i]); // No need of preceding asterisk on p1[n] (throws error)
	leaq	.LC6(%rip), %rsi	 #, tmp111
 # pointers.c:70:   printf("\nThird Section:\n\n");
	call	puts	 #
 # pointers.c:73:   p2 = (int *)malloc(5 * sizeof(int)); // Creating array in Heap
	movl	$20, %ecx	 #,
	call	malloc	 #
 # pointers.c:77:   printf("%d\n", sizeof(*p2)); // (prints 4)
	movl	$4, %edx	 #,
	leaq	.LC6(%rip), %rcx	 #,
 # pointers.c:73:   p2 = (int *)malloc(5 * sizeof(int)); // Creating array in Heap
	movq	%rax, %r12	 # tmp114, _10
 # pointers.c:75:   p2[0] = 10; p2[1] = 15; p2[2] = 14; p2[3] = 21; p2[4] = 31;
	movabsq	$64424509450, %rax	 #, tmp117
	movq	%rax, (%r12)	 # tmp117, MEM <unsigned long> [(int *)_10]
	leaq	4(%r12), %rbx	 #, ivtmp.28
	leaq	20(%r12), %rdi	 #, _9
 # pointers.c:75:   p2[0] = 10; p2[1] = 15; p2[2] = 14; p2[3] = 21; p2[4] = 31;
	movabsq	$90194313230, %rax	 #, tmp118
	movq	%rax, 8(%r12)	 # tmp118, MEM <unsigned long> [(int *)_10 + 8B]
 # pointers.c:75:   p2[0] = 10; p2[1] = 15; p2[2] = 14; p2[3] = 21; p2[4] = 31;
	movl	$31, 16(%r12)	 #, MEM[(int *)_10 + 16B]
 # pointers.c:77:   printf("%d\n", sizeof(*p2)); // (prints 4)
	call	printf	 #
 # pointers.c:78:   printf("%d\n", sizeof(p2)); // (prints 8)
	movl	$8, %edx	 #,
	leaq	.LC6(%rip), %rcx	 #,
	call	printf	 #
 # pointers.c:79:   printf("%d\n", sizeof(&p2)); // (prints 8)
	movl	$8, %edx	 #,
	leaq	.LC6(%rip), %rcx	 #,
	call	printf	 #
 # pointers.c:80:   printf("%d\n", sizeof(p2[0])); // (prints 4)
	movl	$4, %edx	 #,
	leaq	.LC6(%rip), %rcx	 #,
	call	printf	 #
 # pointers.c:82:   printf("\nPointer Heap Array Access:\n");
	leaq	.LC9(%rip), %rcx	 #,
	call	puts	 #
	movl	$10, %edx	 #, pretmp_78
 # pointers.c:84:     printf("%d\n", p2[i]); // No need of preceding asterisk on p1[n] (throws error)
	movq	%rsi, %rcx	 # tmp111,
	call	printf	 #
 # pointers.c:83:   for(int i = 0; i < 5; i++){ // Cannot dynamically find the size of the malloc'd array
	cmpq	%rbx, %rdi	 # ivtmp.28, _9
	je	.L6	 #,
.L11:
 # pointers.c:84:     printf("%d\n", p2[i]); // No need of preceding asterisk on p1[n] (throws error)
	movl	(%rbx), %edx	 # MEM[base: _80, offset: 0B], pretmp_78
	movq	%rsi, %rcx	 # tmp111,
	addq	$4, %rbx	 #, ivtmp.28
	call	printf	 #
 # pointers.c:83:   for(int i = 0; i < 5; i++){ // Cannot dynamically find the size of the malloc'd array
	cmpq	%rbx, %rdi	 # ivtmp.28, _9
	jne	.L11	 #,
.L6:
 # pointers.c:87:   free(p2); // Can only free() malloc'd memory
	movq	%r12, %rcx	 # _10,
	call	free	 #
 # pointers.c:95:   printf("\nPointer Sizes:\n"); // All pointers takes the same size (8 bytes x64)
	leaq	.LC10(%rip), %rcx	 #,
	call	puts	 #
 # pointers.c:96:   printf("%d\n", sizeof(p5));
	movl	$8, %edx	 #,
	leaq	.LC6(%rip), %rcx	 #,
	call	printf	 #
 # pointers.c:97:   printf("%d\n", sizeof(p6));
	movl	$8, %edx	 #,
	leaq	.LC6(%rip), %rcx	 #,
	call	printf	 #
 # pointers.c:98:   printf("%d\n", sizeof(p7));
	movl	$8, %edx	 #,
	leaq	.LC6(%rip), %rcx	 #,
	call	printf	 #
 # pointers.c:99:   printf("%d\n", sizeof(p8));
	movl	$8, %edx	 #,
	leaq	.LC6(%rip), %rcx	 #,
	call	printf	 #
 # pointers.c:100:   printf("%d\n", sizeof(p9));
	movl	$8, %edx	 #,
	leaq	.LC6(%rip), %rcx	 #,
	call	printf	 #
 # pointers.c:103: }
	xorl	%eax, %eax	 #
	addq	$88, %rsp	 #,
	popq	%rbx	 #
	popq	%rsi	 #
	popq	%rdi	 #
	popq	%r12	 #
	ret	
	.seh_endproc
	.ident	"GCC: (GNU) 10.2.0"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	malloc;	.scl	2;	.type	32;	.endef
	.def	free;	.scl	2;	.type	32;	.endef
