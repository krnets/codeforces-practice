fun solve() {
    val n = readN()
    val watched = readInts().toSet()
    val ans = (1..n).toSet().subtract(watched).first()

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()