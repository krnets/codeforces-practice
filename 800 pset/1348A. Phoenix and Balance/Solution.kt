fun solve() {
    val n = readN()
    var sumA = 1 shl n
    var sumB = 0

    (1 until n / 2).forEach { sumA += (1 shl it) }
    (n / 2 until n).forEach { sumB += (1 shl it) }

    println(sumA - sumB)
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() = repeat(readN()) { solve() }