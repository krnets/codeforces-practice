fun solve() {
    val (n, m) = readln().split(' ').map { it.toInt() }

    println(if (minOf(n, m) % 2 == 0) "Malvika" else "Akshat")
}

fun main() = solve()