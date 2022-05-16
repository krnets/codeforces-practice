fun solve() {
    val (_, m) = readInts()
    val tvCosts = readInts().sorted()
    var ans = 0

    for (tvCost in tvCosts.take(m)) {
        if (tvCost > 0)
            break

        ans -= tvCost
    }

    println(ans)
}

fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()