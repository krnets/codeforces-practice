fun solve() {
    val n = readN()
    val ans = readln().groupingBy { it }.eachCount()
        .maxByOrNull { it.value }!!
        .key.toString()
        .repeat(n)

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }