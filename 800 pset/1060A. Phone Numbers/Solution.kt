fun solve() {
    val n = readN()
    val count8s = readln().map { it.digitToInt() }
        .groupingBy { it }.eachCount()
        .getOrDefault(8, 0)

    val ans = minOf(count8s, n / 11)

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()