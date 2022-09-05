/* 
For a function with prototype:

long decode2(long x, long y, long z);

gcc generates the following assembly code:

decode2:
subq %rdx, %rsi
imulq %rsi, %rdi
movq %rsi, %rax
salq $63, %rax
sarq $63, %rax
xorq %rdi, %rax
ret

Parameters x, y, and z are passed in registers %rdi, %rsi, and %rdx. The code
stores the return value in register %rax.

Write C code for decode2 that will have an effect equivalent to the assembly
code shown
*/


long decode2(int x, int y, int z) {
    long result = y - z;
    printf("%lu", (result * x) ^ (result << 63 >> 63));
    return (result * x) ^ (result << 63 >> 63);
}