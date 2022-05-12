fun solve() {
    val n = readN()
    val row = readln()

    val otherRow = row.toCharArray().map {
        when (it) {
            'D' -> 'U'
            'U' -> 'D'
            else -> it
        }
    }.joinToString("")

    println(otherRow)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLines(n: Int) = List(n) { readln() }

fun main() = repeat(readN()) { solve() }