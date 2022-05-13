fun solve() {
    val n = readN()
    val sq = Math.sqrt(n.toDouble()).toInt()

    if (sq * sq == n)
        println(sq)
    else
        println(sq + 1)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }