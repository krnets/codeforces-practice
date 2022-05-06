fun main() {
    repeat(readLine()!!.toInt()) {
        solve()
    }
}

fun solve() {
    readLine()!!.toInt()
    val arr = readLine()!!.split(' ').map { it.toInt() }
    val min = arr.minOrNull()
    val cnt = arr.count { it != min }

    println(cnt)
}
