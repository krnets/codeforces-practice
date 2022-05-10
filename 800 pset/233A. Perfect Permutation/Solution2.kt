fun solve() {
    val n = readln().toInt()

    if (n % 2 == 1) {
        println(-1)
        return
    }
    val res = IntArray(n)

    for (i in 0 until n - 1 step 2) {
        res[i + 1] = i + 1
        res[i] = i + 2
    }

    println(res.joinToString(" "))
}

fun main() = solve()