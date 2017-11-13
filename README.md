# Testbench for [Kotlin/Native](https://github.com/JetBrains/kotlin-native)

[![Build status](https://ci.appveyor.com/api/projects/status/github/msink/kotlin-pi?svg=true)](https://ci.appveyor.com/project/msink/kotlin-pi)

The original pi.c was taken from http://bellard.org/pi/pi.c
(added a plain loop to calculate digits from 1 to n instead of digits around n-th)

Computing 1000 decimal digits of π, average time on 5 runs:

- plain C : ≈8 sec
- Kotlin/JVM : same as C, ±10%
- Kotlin/Native : ≈12 sec
- Kotlin/Native interop with C : same as C

Result - pure Kotlin/Native approx. 1.5 times slower in this test.
If you want maximum performance - write critical parts in C and call via interop.
