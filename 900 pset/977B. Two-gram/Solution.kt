fun solve() {
    readln()

    val ans = readln().windowed(2)
        .groupingBy { it }
        .eachCount()
        .entries
        .maxByOrNull { it.value }!!
        .key

    println(ans)
}

fun main() = solve()