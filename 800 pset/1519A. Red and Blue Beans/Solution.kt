fun solve() {
    val (r, b, d) = readInts()
    val ans = minOf(r, b) * (d + 1L) >= maxOf(r, b)

    println(if (ans) "Yes" else "No")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }