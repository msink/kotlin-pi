# Testbench for [Kotlin/Native](https://github.com/JetBrains/kotlin-native)

[![Build status](https://ci.appveyor.com/api/projects/status/github/msink/kotlin-pi?svg=true)](https://ci.appveyor.com/project/msink/kotlin-pi)

Compute 1000 decimal digits, get average on 5 runs:

- plain C : ≈8 sec
- Kotlin/JVM : same as C, ±10%
- Kotlin/Native : ≈12 sec

Result - approx. 1.5 times slower in this test.
