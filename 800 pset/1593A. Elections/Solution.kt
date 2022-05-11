fun solve() {
    val (a, b, c) = readInts()

    val resA = maxOf(0, maxOf(b, c) + 1 - a)
    val resB = maxOf(0, maxOf(a, c) + 1 - b)
    val resC = maxOf(0, maxOf(a, b) + 1 - c)

    println("$resA $resB $resC")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }