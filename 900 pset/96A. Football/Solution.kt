fun solve() {
    val players = readln()
    var current = 1
    var ans = current
    var prev = players.first()

    for (i in players.indices.drop(1)) {
        if (players[i] == prev) {
            current++
            ans = maxOf(ans, current)
        } else current = 1

        prev = players[i]
    }

    println(if (ans >= 7) "YES" else "NO")
}

fun main() = solve()