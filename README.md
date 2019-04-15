# xtime calculator
* Two C files for dec or hex format
# Translation for Windows under MinGW:
```
gcc dec.c -o dec.exe
gcc hex.c -o hex.exe
```
# Translation for Linux under GCC:
```
gcc dec.c -o dec
gcc hex.c -o hex
```
# Optional translation:
```
make
or
make all
```
# Usage or DEC:
```
Enter numbers from range 0 - 255:
Enter number 1:
10 (your number) 
Enter number 2:
20 (your number)
Xtime result: 136
```
# Usage or HEX:
```
Enter numbers from range 00-FF:
Enter number 1:
0xAA (your number)
Enter number 2:
0xBB (your number)
Xtime result: 0x56
```
