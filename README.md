# Testbench for [Kotlin/Native Early Access Program](https://github.com/JetBrains/kotlin-native)

[![Build status](https://ci.appveyor.com/api/projects/status/github/msink/kotlin-pi?svg=true)](https://ci.appveyor.com/project/msink/kotlin-pi)
[![Build Status](https://travis-ci.org/msink/kotlin-pi.svg?branch=master)](https://travis-ci.org/msink/kotlin-pi)

The original pi.c was taken from http://bellard.org/pi/pi.c
(added a plain loop to calculate digits from 1 to n instead of digits around n-th)

Computing 1000 decimal digits of π, average time on 5 runs:

|                              |                 |
| :--------------------------- | :-------------  |
| plain C                      | ≈7 sec          |
| Kotlin/JVM                   | same as C, ±10% |
| Kotlin/Native interop with C | same as C       |
| Kotlin/Native 0.4 EAP        | ≈12 sec         |
| Kotlin/Native 0.6 EAP        | ≈10 sec         |

Result - pure Kotlin/Native (EAP) approx. 1.4 times slower in this test.
If you really want maximum performance - write critical parts in C and call via interop.
