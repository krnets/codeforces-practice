fun solve() {
    var desiredHeight = readN()
    val monthsGrowth = readInts().sortedDescending()
    var ans = 0

    while (desiredHeight > 0 && ans < 12) {
        desiredHeight -= monthsGrowth[ans]
        ans++
    }

    println(if (ans == 12 && desiredHeight > 0) -1 else ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()