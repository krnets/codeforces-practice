fun solve() {
    readln()
    val (oddHeight, evenHeight) = readInts().partition { it % 2 == 1 }
    val ans = (oddHeight + evenHeight).joinToString(" ")

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }