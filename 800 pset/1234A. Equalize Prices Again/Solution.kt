fun solve() {
    val n = readN().toDouble()
    val prices = readInts()
    val ans = Math.ceil(prices.sum() / n)

    println(ans.toInt())
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }