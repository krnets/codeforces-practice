fun solve() {
    val (x, y, a, b) = readInts()
    val distance = y - x
    val advanceBy = a + b

    println(if (distance % advanceBy == 0) distance / advanceBy else -1)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }