fun solve() {
    val players = readln()

    println(
        if (players.contains("1".repeat(7)) or players.contains("0".repeat(7)))
            "YES"
        else "NO"
    )
}

fun main() = solve()