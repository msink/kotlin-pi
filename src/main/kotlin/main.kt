import pi.*

fun main(args: Array<String>) {
    var nmax = 0
    if (args.isNotEmpty()) {
        try {
            nmax = args[0].toInt()
        } catch (e: Exception) {
        }
    }
    if (nmax <= 0) {
        println("This program computes n decimal digits of \\pi")
        println("usage: pi n")
        println("where n is the number of digits you want")
        return
    }

    print("3.")
    for (n in 1 .. nmax step 9)
            print(pi_nth_digit(n).toString().padStart(9, '0'))
    println()
}
