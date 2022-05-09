fun solve() {
    val a = readInts()
    val sum = readln().fold(0) { acc, c -> acc + a[c.digitToInt() - 1] }

    println(sum)
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() = solve()