fun solve() {
    val letters = readln()
    val n = letters.length
    val dp = IntArray(n)
    var countQs = 0
    var ans = 0

    for (i in 0 until n) {
        if (letters[i] == 'Q')
            countQs++

        dp[i] = countQs
    }

    for (i in 0 until n)
        if (letters[i] == 'A')
            ans += dp[i] * (dp[n - 1] - dp[i])

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLines(n: Int) = List(n) { readln() }

fun main() = solve()