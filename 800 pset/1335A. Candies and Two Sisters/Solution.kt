fun solve() {
    val n = readInt()
    var ans = if (n % 2 == 0) n / 2 - 1 else n / 2

    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }
