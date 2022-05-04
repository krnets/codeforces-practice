fun main() {
    repeat(readLine()!!.toInt()) {
        solve()
    }
}

fun solve() {
    var n = readLine()!!.toInt()
    n = n or (n shr 1)
    n = n or (n shr 2)
    n = n or (n shr 4)
    n = n or (n shr 8)
    n = n or (n shr 16)

    println(((n + 1) shr 1) - 1)
}
