fun solve() {
    var (red, blue) = readInts()

    val maxDaysDifferentSocks = Math.min(red, blue)
    red -= maxDaysDifferentSocks
    blue -= maxDaysDifferentSocks

    var maxDaysSameSocks = (red + blue) / 2

    println("$maxDaysDifferentSocks $maxDaysSameSocks")
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
