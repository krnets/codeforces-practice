fun solve() {
    val (a, b, c, d) = readInts()

    println("$b $c $c")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }