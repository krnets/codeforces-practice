fun solve() {
    val (a, b) = readLines(2).map { it.lowercase() }

    println(
        when {
            a < b -> -1
            a > b -> 1
            else -> 0
        }
    )
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun main() = solve()
