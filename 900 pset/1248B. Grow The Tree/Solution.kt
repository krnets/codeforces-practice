fun solve() {
    readln()
    val stickLengths = readLongs().sorted()
    val mid = stickLengths.size / 2
    val small = stickLengths.take(mid).sum()
    val large = stickLengths.drop(mid).sum()

    val ans = small * small + large * large

    println(ans)
}

fun readStrings() = readln().split(' ')
fun readLongs() = readStrings().map { it.toLong() }

fun main() = solve()