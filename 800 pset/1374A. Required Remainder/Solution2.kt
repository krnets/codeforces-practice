fun solve() {
    val (x, y, n) = readInts()
    val r = n / x
    val ans = r * x + y

    if (ans > n)
        println((r - 1) * x + y)
    else println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }