fun solve() {
    var (a, b) = readInts()
    val minMoves = (Math.abs(b - a) + 9) / 10

    println(minMoves)

}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }
