fun solve() {
    val n = readInt()
    val gifts = readInts()
    var arr = IntArray(n)

    for (i in gifts.indices)
        arr[gifts[i] - 1] = i + 1

    println(arr.joinToString(" "))
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
