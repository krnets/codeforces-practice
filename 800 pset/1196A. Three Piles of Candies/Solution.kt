fun solve() {
    val candyPiles = readLongs()
    val ans = candyPiles.sum() / 2

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readLongs() = readStrings().map { it.toLong() }

fun main() = repeat(readN()) { solve() }