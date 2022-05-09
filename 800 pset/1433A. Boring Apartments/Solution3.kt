fun solve() {
    val x = readInt()
    val len = x.toString().length
    val nSum = len * (len + 1) / 2
    val digit = x % 10 - 1
    val ans = 10 * digit + nSum
    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() = repeat(readInt()) { solve() }