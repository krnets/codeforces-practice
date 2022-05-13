fun solve() {
    val (n, m, k) = readInts()

    if (n * m - 1 == k)
        println("Yes")
    else println("No")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }