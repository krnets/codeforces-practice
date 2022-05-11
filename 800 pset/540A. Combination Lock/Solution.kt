fun solve() {
    val n = readln().toInt()
    val original = readln().map { it.digitToInt() }
    val combination = readln().map { it.digitToInt() }
    var count = 0

    for (i in 0 until n) {

        count += minOf(
            Math.abs(original[i] - combination[i]),
            10 - Math.abs(original[i] - combination[i])
        )
    }
    println(count)
}

fun main() = solve()