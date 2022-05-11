fun solve() {
    readln()
    val s = readln()
    val ans = s.split(Regex("[^x]")).filterNot { it.isEmpty() }
        .sumOf { maxOf(0, it.length - 2) }

    println(ans)
}

fun main() = solve()