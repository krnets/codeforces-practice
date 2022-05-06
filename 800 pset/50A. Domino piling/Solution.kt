fun main() {
    solve()
}

fun solve() {
    val (m, n) = readInts()
    val ans = m * n / 2

    println(ans)
}

private fun readInt() = readln().toInt()
private fun readStrings() = readln().split(' ')
private fun readInts() = readStrings().map { it.toInt() }
