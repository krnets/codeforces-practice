fun solve() {
    val x = readInt()
    val minSteps = if (x % 5 == 0) x / 5 else x / 5 + 1
    println(minSteps)
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun main() = solve()
