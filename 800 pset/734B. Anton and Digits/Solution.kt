fun solve() {
    val (k2, k3, k5, k6) = readInts()
    val n256 = minOf(k2, k5, k6)
    val n32 = minOf(k3, k2 - n256)

    val ans = 32 * n32 + 256 * n256

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()