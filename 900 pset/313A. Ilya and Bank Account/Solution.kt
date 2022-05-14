fun solve() {
    val n = readN()

    if (n >= 0)
        println(n)
    else {
        val a = (n - n % 10) / 10
        val b = ((n - (n % 100 - n % 10)) / 10) + n % 10
        println(maxOf(a, b))
    }
}

fun readN() = readln().toInt()
fun main() = solve()