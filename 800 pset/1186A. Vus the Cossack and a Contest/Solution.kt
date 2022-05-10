fun solve() {
    val (n, m, k) = readln().split(' ').map { it.toInt() }

    println(if (n <= minOf(m, k)) "Yes" else "No")
}

fun main() = solve()