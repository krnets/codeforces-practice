fun solve() {
    val (a, b) = readInts()

    if (a % b == 0)
        println(0)
    else if (a < b)
        println(b - a)
    else
        println(b - (a % b))
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }
