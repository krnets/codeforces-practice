fun solve() {
    val n = readInt()
    val a = readLongs()
    val b = readLongs()
    val minA = a.minOf { it }
    val minB = b.minOf { it }

    val ans = a.zip(b).sumOf { maxOf(it.first - minA, it.second - minB) }

    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() = repeat(readInt()) { solve() }