fun solve() {
    val n = readN()

    for (pw in 2..29) {
        val k = (1 shl pw) - 1

        if (n % k == 0) {
            println(n / k)
            return
        }
    }

}

fun readN() = readln().toInt()
fun main() = repeat(readN()) { solve() }