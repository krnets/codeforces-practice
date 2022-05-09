fun solve() {
    val (x, y, n) = readInts()

    if (n - n % x + y <= n)
        println(n - n % x + y)
    else
        println(n - n % x - (x - y))
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }