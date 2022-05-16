fun solve() {
    readln()
    val (ones, zeros) = readln().partition { it == '1' }
    val ans = Math.abs(ones.length - zeros.length)

    println(ans)
}

fun main() = solve()