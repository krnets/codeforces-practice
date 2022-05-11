fun solve() {
    val n = readln().toInt()
    val original = readln().map { it.digitToInt() }
    val combination = readln().map { it.digitToInt() }

    val count = original.zip(combination).sumOf {
        val distance = Math.abs(it.first - it.second)
        minOf(distance, 10 - distance)
    }
    println(count)
}

fun main() = solve()