fun solve() {
    readln()
    val coinValues = readInts().sortedDescending().toIntArray()
    val half = coinValues.sum() / 2
    var mySum = 0
    var ans = 0

    for (coin in coinValues) {
        mySum += coin
        ans++

        if (mySum > half)
            break
    }

    println(ans)
}

fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()