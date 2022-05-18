fun solve() {
    readln()
    val colours = readInts()
    val ans = colours
        .groupingBy { it }
        .eachCount()
        .maxByOrNull { it.value }!!
        .value

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }