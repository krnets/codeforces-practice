fun solve() {
    val (_, d) = readInts()
    val arr = readInts().sorted()

    println(if (arr.last() <= d || arr[0] + arr[1] <= d) "Yes" else "No")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }