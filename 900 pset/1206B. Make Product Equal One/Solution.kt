fun solve() {
    readln()
    val arr = readInts().toIntArray()
    var steps = 0L
    var countNeg = 0L
    var countZero = 0L

    for (x in arr) {
        if (x < 0) {
            steps += (-1 - x)
            countNeg++
        } else if (x > 0) {
            steps += (x - 1)
        } else
            countZero++
    }

    if (countNeg % 2 == 0L)
        println(steps + countZero)
    else println(
        if (countZero > 0)
            steps + countZero
        else steps + 2
    )
}

fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()