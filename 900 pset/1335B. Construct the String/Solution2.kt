fun solve() {
    val (n, a, b) = readInts()
    val sb = StringBuilder()

    for (i in 0 until n) {
        sb.append('a' + i % b)
    }

    println(sb)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }