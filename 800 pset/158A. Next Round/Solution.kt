fun main() {
    solve()
}

fun solve() {
    val (_, k) = readInts()
    val participants = readInts()
    val score = participants[k - 1]
    val ans = participants.takeWhile { it > 0 && it >= score }.count()

    println(ans)
}

private fun readInt() = readln().toInt()
private fun readStrings() = readln().split(' ')
private fun readInts() = readStrings().map { it.toInt() }
