fun solve() {
    val n = readInt()
    val x = if (n % 2 == 0) n - 8 else n - 9
    val y = n - x

    println("$x $y")

}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
