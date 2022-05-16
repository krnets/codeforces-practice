fun solve() {
    val (zeros, ones) = readln().partition { it == '0' }

    val ans = (zeros.isNotEmpty() and ones.isNotEmpty()) and
            (minOf(zeros.length, ones.length) % 2 == 1)

    println(if (ans) "Da" else "Net")
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }