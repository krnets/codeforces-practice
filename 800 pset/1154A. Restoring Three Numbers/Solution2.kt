fun solve() {
    var list = readInts().sortedDescending()
    val max = list.first()
    val result = mutableListOf<Int>()

    (1..list.lastIndex).forEach { i ->
        result.add(max - list[i])
    }
    println(result.joinToString(" "))
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
