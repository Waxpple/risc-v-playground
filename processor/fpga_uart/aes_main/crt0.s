.section .init, "ax"
.global _start
_start:
    .cfi_startproc
    la sp, __stack_top
    add s0, sp, zero
    jal zero, main
    .cfi_endproc
    .end
