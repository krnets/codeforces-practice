fun solve() {
    val (a, b) = readDoubles()

    val ans = Math.pow(minOf(maxOf(2 * b, a), maxOf(2 * a, b)), 2.0)

    println(ans.toInt())
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() = repeat(readInt()) { solve() }