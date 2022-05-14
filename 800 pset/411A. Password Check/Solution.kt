fun solve() {
    val password = readln()
    val isStrong = (password.length >= 5) and
            password.any { it in ('0'..'9') } and
            password.any { it in ('a'..'z') + "!?,.,_" } and
            password.any { it in ('A'..'Z') + "!?,.,_" }

    println(if (isStrong) "Correct" else "Too weak")
}

fun main() = solve()