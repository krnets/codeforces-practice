fun solve() {
    val lamps = readInts()
    val mx = lamps.maxOf { it }
    val sum = lamps.sum()

    val ans = (sum - mx) >= sum / 2

    println(if (ans) "Yes" else "No")
}

fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }