fun solve() {
    val (a, b, c) = readInts()

    val ans = (a + b == c) or
            (a + c == b) or
            (b + c == a) or
            (a == b && c % 2 == 0) or
            (a == c && b % 2 == 0) or
            (b == c && a % 2 == 0)

    println(if (ans) "Yes" else "No")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }