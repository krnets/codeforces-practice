fun solve() {
    val n = readN()

    val permutations =
        if (n % 2 == 0)
            (1..n).chunked(2).flatMap { listOf(it[1], it[0]) }
        else
            listOf(3, 1, 2) + (4..n).chunked(2).flatMap { listOf(it[1], it[0]) }

    println(permutations.joinToString(" "))
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLines(n: Int) = List(n) { readln() }

fun main() = repeat(readN()) { solve() }