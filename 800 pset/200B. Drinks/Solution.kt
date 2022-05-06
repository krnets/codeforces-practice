fun solve() {
    val n = readInt()
    val arr = readInts()
    val average = arr.sum().toDouble() / n

    println(average)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
