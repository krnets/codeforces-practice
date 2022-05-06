fun solve() {
    val stats = readInts().stream().mapToInt { it }.summaryStatistics()
    val minTotalDistance = stats.max - stats.min

    println(minTotalDistance)

}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
