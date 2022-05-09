fun solve() {
    val n = readInt()
    val a = readLongs().sorted()
    val maxDiff = a.last() - a.first()
    val ans = a.zip(a.drop(1)).minOf { minOf(maxDiff, it.second - it.first) }

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