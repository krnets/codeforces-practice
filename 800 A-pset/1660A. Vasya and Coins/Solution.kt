fun main() {
    repeat(readLine()!!.toInt()) {
        solve()
    }
}

fun solve() {
    val (a, b) = readLine()!!.split(' ').map { it.toInt() }
    println(
        if (a == 0) 1
        else a + 2 * b + 1
    )
}