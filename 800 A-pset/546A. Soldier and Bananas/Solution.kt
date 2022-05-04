fun solve() {
    val (k, n, w) = readInts()
    val totalSum = generateSequence(1) { it + 1 }.map { k * it }.take(w).sum()
    println(if (totalSum < n) 0 else totalSum - n)
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun main() = solve()
