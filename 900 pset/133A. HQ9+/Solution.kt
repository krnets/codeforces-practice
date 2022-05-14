fun solve() {
    val instructions = readln()

    println(
        if (instructions.any { it in "HQ9" })
            "YES"
        else "NO"
    )
}

fun main() = solve()