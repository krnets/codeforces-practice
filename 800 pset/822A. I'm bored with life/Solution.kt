fun solve() {
    val (a, b) = readLongs()
    var ans = 1L

    for (i in 2..minOf(a,b))
        ans *= i

    println(ans)
}

fun readStrings() = readln().split(' ')
fun readLongs() = readStrings().map { it.toLong() }

fun main() = solve()