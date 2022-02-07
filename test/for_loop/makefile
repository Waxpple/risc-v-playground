CC32=riscv32-unknown-elf
CC64=riscv64-unknown-elf
CCFLAGS=-march=rv32i -mabi=ilp32 -O3 -T ../linksc.ld -nostartfiles -ffunction-sections -fdata-sections -Wl,--gc-sections -o for_loop.elf
	
build:
	$(CC32)-gcc for_loop.c ../crt0.s $(CCFLAGS)
	$(CC32)-objcopy -O binary -j .init -j .text -j .rodata for_loop.elf for_loop.bin
	../rom_generator for_loop.bin
	cp for_loop.data ../memory_contents

multilib:
	$(CC64)-gcc for_loop.c ../crt0.s $(CCFLAGS)
	$(CC64)-objcopy -O binary -j .init -j .text -j .rodata for_loop.elf for_loop.bin
	../rom_generator for_loop.bin
	cp for_loop.data ../memory_contents
