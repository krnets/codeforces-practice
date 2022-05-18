fun solve() {
    val (n, m) = readLongs()
    var ans = 0
    var a = 0L

    while (a * a <= n) {

        val b = n - a * a

        if (b * b + a == m)
            ans++

        a++
    }

    println(ans)
}

fun readStrings() = readln().split(' ')
fun readLongs() = readStrings().map { it.toLong() }

fun main() = solve()