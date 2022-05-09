fun solve() {
    val n = readInt()
    var score = 0

    repeat(n) {
        val (m, c) = readInts()
        if (m > c) score--
        else if (m < c) score++
    }

    when {
        (score < 0) -> println("Mishka")
        (score > 0) -> println("Chris")
        else -> println("Friendship is magic!^^")
    }
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()