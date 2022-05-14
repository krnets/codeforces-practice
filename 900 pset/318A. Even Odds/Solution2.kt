fun solve() {
    val (n, k) = readLongs()

    val ans: Long =
        if (k <= (n + 1) / 2)
            2 * k - 1
        else 2 * (k - (n + 1) / 2)

    println(ans)
}

fun readStrings() = readln().split(' ')
fun readLongs() = readStrings().map { it.toLong() }

fun main() = solve()