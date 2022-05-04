fun main() {
    repeat(readLine()!!.toInt()) {
        solve()
    }
}

fun solve() {
    var n = readLine()!!.toInt()
    var cnt = -1

    while (n != 0) {
        cnt++
        n /= 2
    }
    val ans = (1 shl cnt) - 1

    println(ans)
}