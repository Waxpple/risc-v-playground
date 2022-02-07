# Hornet RISC-V Core
Hornet is a simple, fully open-source, FPGA-proven 32-bit RISC-V core.

## How to start
1. compile rom_generator

```bash
gcc rom_generator.c -o rom_generator
```

2. write your own cpp file

```bash
#(in your code directory)
make
./$(your program)_script
```

3. compile your file and copy memory content(use make file)
4. run test.
