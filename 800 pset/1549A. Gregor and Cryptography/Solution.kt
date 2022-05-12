fun solve() {
    val n = readN()
    val a = 2
    val p = n - 1

    println("$a $p")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLines(n: Int) = List(n) { readln() }

fun main() = repeat(readN()) { solve() }