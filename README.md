# Testbench for [Kotlin/Native EAP](https://github.com/JetBrains/kotlin-native)

[![Build status](https://ci.appveyor.com/api/projects/status/github/msink/kotlin-pi?svg=true)](https://ci.appveyor.com/project/msink/kotlin-pi)
[![Build Status](https://travis-ci.org/msink/kotlin-pi.svg?branch=master)](https://travis-ci.org/msink/kotlin-pi)

The original pi.c was taken from http://bellard.org/pi/pi.c
(added a plain loop to calculate digits from 1 to n instead of digits around n-th)

Computing 1000 decimal digits of π, average time on 20 runs:

|                              |                 |
| :--------------------------- | :-------------  |
| C                            | 6.8 sec         |
| Kotlin/Native interop with C | 6.8 sec         |
| Kotlin/Native 0.7 EAP        | 6.9 sec         |
| Kotlin/Native 0.6.2 EAP      | 9.3 sec         |
| Kotlin/Native 0.6 EAP        | 10.2 sec        |
| Kotlin/Native 0.4 EAP        | 11.4 sec        |

Result - performance in this test is almost identical, Kotlin is approx. 2% slower.

But it is EAP, so even that 2% may be fixed in next versions.
