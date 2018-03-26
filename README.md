# Testbench for [Kotlin/Native Early Access Program](https://github.com/JetBrains/kotlin-native)

[![Build status](https://ci.appveyor.com/api/projects/status/github/msink/kotlin-pi?svg=true)](https://ci.appveyor.com/project/msink/kotlin-pi)
[![Build Status](https://travis-ci.org/msink/kotlin-pi.svg?branch=master)](https://travis-ci.org/msink/kotlin-pi)

The original pi.c was taken from http://bellard.org/pi/pi.c
(added a plain loop to calculate digits from 1 to n instead of digits around n-th)

Computing 1000 decimal digits of π, average time on 20 runs:

|                              |                 |
| :--------------------------- | :-------------  |
| plain C                      | 6.8 sec         |
| Kotlin/JVM                   | same as C, ±10% |
| Kotlin/Native interop with C | same as C       |
| Kotlin/Native 0.4 EAP        | 11.4 sec        |
| Kotlin/Native 0.6 EAP        | 10.2 sec        |
| Kotlin/Native 0.6.2 EAP      | 9.3 sec         |
| Kotlin/Native after #1424    | 6.8 sec         |

Result - currently pure math calculation in Kotlin/Native now is 1.4 times slower in this test.

But this issue is already fixed in master branch, and hopefully in next version performance will be identical.
