fun solve() {
    val nums = readInts()
    val ans = mutableListOf(
        nums[0],
        nums[1],
        nums.last() - nums[0] - nums[1]
    )

    println(ans.joinToString(" "))
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }