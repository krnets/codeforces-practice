fun solve() {
    val n = readN()
    val count8s = readln().count { it == '8' }
    val ans = minOf(count8s, n / 11)

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()