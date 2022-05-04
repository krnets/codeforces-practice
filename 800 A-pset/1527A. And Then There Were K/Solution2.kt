fun main() {
    repeat(readLine()!!.toInt()) {
        solve()
    }
}

fun solve() {
    var n = readLine()!!.toInt()
    var lastMaxSetBit = 0

    for (i in 0..30)
        if (n shr i and 1 == 1)
            lastMaxSetBit = i

    val ans = (1 shl lastMaxSetBit) - 1

    println(ans)
}
