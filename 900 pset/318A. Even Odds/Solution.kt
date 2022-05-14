fun solve() {
    val (n, k) = readLongs()

    if (k <= (n + 1) / 2) {
        println(2 * k - 1)
    } else {
        val ans = 2 * (k - (n + 1) / 2)
        println(ans)
    }
}

fun readStrings() = readln().split(' ')
fun readLongs() = readStrings().map { it.toLong() }

fun main() = solve()