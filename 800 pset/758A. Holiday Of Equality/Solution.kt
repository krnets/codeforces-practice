fun solve() {
    val n = readInt()
    val citizens = readInts()
    val max = citizens.maxOf { it }
    val sum = citizens.sum()

    println(n * max - sum)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
