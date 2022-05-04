fun main() {
    repeat(readLine()!!.toInt()) {
        solve()
    }
}

fun solve() {
    var n = readLine()!!.toInt()
    val lastMaxSetBit = n.toString(2).length - 1
    val ans = (1 shl lastMaxSetBit) - 1

    println(ans)
}
