fun solve() {
    val (a, b, c) = readInts()
    val sum = a + b + c
    var ans = false

    if (a != b && b != c && c != a) {
        if (maxOf(a, b, c) * 2 == sum)
            ans = true
    } else if (sum % 2 == 0)
        ans = true

    println(if (ans) "Yes" else "No")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }