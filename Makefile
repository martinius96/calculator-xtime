all: dec hex

dec:
  gcc -o dec.exe dec.c

hex:
  gcc -o hex.exe dec.c 
