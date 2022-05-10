fun solve() {
    readN()
    val nums = readInts()
    val queue = ArrayDeque(nums)
    val original = mutableListOf<Int>()
    var flag = false

    while (!queue.isEmpty()) {
        if (flag)
            original.add(queue.removeLast())
        else original.add(queue.removeFirst())

        flag = !flag
    }
    println(original.joinToString(" "))
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }
fun gcd(a: Int, b: Int): Int = if (b == 0) a else gcd(b, a % b)

fun main() = repeat(readN()) { solve() }
