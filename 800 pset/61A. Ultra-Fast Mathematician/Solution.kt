fun solve() = println(
    readln().zip(readln()).map {
        if (it.first != it.second) '1'
        else '0'
    }.joinToString("")
)

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
