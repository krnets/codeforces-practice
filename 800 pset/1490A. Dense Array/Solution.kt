fun solve() {
    val n = readN()
    val nums = readInts().toMutableList()
    var last = nums.first()
    var ans = 0

    for (i in 1 until n) {

        var mn = minOf(last, nums[i])
        val mx = maxOf(last, nums[i])

        while (mn * 2 < mx) {
            ans++
            mn *= 2
        }
        last = nums[i]
    }

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }