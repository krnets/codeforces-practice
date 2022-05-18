fun solve() {
    readln()
    val ans = readInts()
        .groupingBy { it }
        .eachCount()
        .entries
        .firstOrNull { it.value >= 3 }
        ?.key ?: -1

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }