fun solve() {
    val n = readLong()
    val arr = readLongs()

    if (arr[0] + arr[1] > arr.last())
        println(-1)
    else
        println(listOf(1, 2, n).joinToString(" "))
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readLong() = readln().toLong()
fun readLongs() = readStrings().map { it.toLong() }

fun main() = repeat(readN()) { solve() }