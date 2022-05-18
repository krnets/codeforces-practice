fun solve() {
    val n = readN()
    val fighters = readInts()
    val min = fighters.minOf { it }
    val ans = n - fighters.count { it == min }

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }