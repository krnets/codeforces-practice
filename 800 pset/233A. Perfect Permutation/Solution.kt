fun solve() {
    val n = readln().toInt()

    if (n % 2 == 1) {
        println(-1)
        return
    }
    val res = (1..n).toMutableList()

    for (i in 0 until n - 1 step 2) {
        val temp = res[i]
        res[i] = res[i + 1]
        res[i + 1] = temp
    }

    println(res.joinToString(" "))
}

fun main() = solve()