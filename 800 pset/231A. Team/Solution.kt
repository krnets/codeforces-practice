fun main() {
    solve()
}

fun solve() {
    val n = readLine()!!.toInt()
    var ans = 0

    repeat(n) {
        if (readLine()!!.split(' ').count { it == "1" } > 1)
            ans++
    }
    println(ans)
}
