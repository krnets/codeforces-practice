fun solve() {
    readInt()
    val arr = readInts()
    val x = arr.groupingBy { it }.eachCount().entries.first { it.value == 1 }.key
    println(arr.indexOf(x) + 1)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }
