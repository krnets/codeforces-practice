fun solve() = println(
    if (readln().asSequence().distinct().count() % 2 == 0)
        "CHAT WITH HER!"
    else "IGNORE HIM!"
)

fun readInt() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readLines(n: Int) = List(n) { readln() }
fun main() = solve()
