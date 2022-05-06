fun solve() {
    var list = readInts().sortedDescending()
    val mx = list.first()

    (1..list.lastIndex).forEach { i ->
        print("${mx - list[i]} ")
    }
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
