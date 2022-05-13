fun solve() {
    val episodes = (1..readN()).toSet()
    val watched = readInts().toSet()
    val ans = episodes.first { it !in watched }

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()