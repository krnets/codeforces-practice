fun solve() {
    val n = readInt()

    if (n / 2 % 2 == 1)
        println("NO")
    else {
        println("YES")
        val ans = IntArray(n)
        val mid = n / 2
        val lastValue = n + mid - 1

        for (i in 0 until mid) {
            ans[i] = 2 * i + 2
            ans[mid + i] = 2 * i + 1
        }
        ans[ans.lastIndex] = lastValue

        println(ans.joinToString(" "))
    }
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }
