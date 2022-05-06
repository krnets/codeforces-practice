fun main() {
    repeat(readLine()!!.toInt()) {
        solve()
    }
}

fun solve() {
    val n = readLine()!!.toInt()
    val arr = readLine()!!.split(' ').map { it.toInt() }
    val mn = arr.minOrNull()
    var ans = 0

    (0 until n).forEach {
        if (arr[it] != mn)
            ans++
    }
    println(ans)
}
