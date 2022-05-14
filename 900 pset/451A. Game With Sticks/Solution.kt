fun solve() {
    var (n, m) = readln().split(' ').map { it.toInt() }

    if (n > m)
        n = m.also { m = n }

    println(
        if (n % 2 == 0)
            "Malvika"
        else
            "Akshat"
    )
}

fun main() = solve()