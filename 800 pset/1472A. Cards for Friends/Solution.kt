fun solve() {
    var (w, h, n) = readInts()
    var cuts = 1

    while (w % 2 == 0) {
        w /= 2
        cuts *= 2
    }
    while (h % 2 == 0) {
        h /= 2
        cuts *= 2
    }
    println(if (cuts < n) "NO" else "YES")
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() = repeat(readN()) { solve() }