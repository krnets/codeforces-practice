fun solve() {
    val n = readLong()

    if (n and (n - 1L) == 0L)
        println("No")
    else
        println("Yes")
}

fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readN() = readln().toInt()
fun readLong() = readln().toLong()

fun main() = repeat(readN()) { solve() }