fun solve() {
    val n = readN()
    val stones = readInts()
    val stats = stones.stream().mapToInt { it }.summaryStatistics()

    val minPos = stones.indexOf(stats.min)
    val maxPos = stones.indexOf(stats.max)

    val a = n - maxPos + minPos + 1
    val b = n - minPos + maxPos + 1
    val c = n - minOf(minPos, maxPos)
    val d = maxOf(maxPos, minPos) + 1

    val ans = minOf(a, b, c, d)

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }