fun solve() {
    val n = readN()

    if (n == 1) {
        readln()
        println(1)
        return
    }
    val arr = readInts()
    var prev = arr.first()
    var countNonDecreasing = 1
    var ans = countNonDecreasing

    arr.drop(1).forEach { x ->
        if (x >= prev) {
            countNonDecreasing++
            ans = maxOf(ans, countNonDecreasing)
        } else countNonDecreasing = 1

        prev = x
    }

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()