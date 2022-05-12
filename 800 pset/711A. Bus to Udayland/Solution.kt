fun solve() {
    val n = readN()
    val rows = readLines(n).toMutableList()
    var seatsAvailable = false

    for (i in rows.indices) {
        val pos = rows[i].indexOf("OO")

        if (pos != -1) {
            if (pos == 0)
                rows[i] = "++" + rows[i].substring(2)
            else {
                rows[i] = rows[i].take(3) + "++"
            }
            seatsAvailable = true
            break
        }
    }

    if (seatsAvailable) {
        println("YES")
        rows.forEach { println(it) }
    } else
        println("NO")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLines(n: Int) = List(n) { readln() }

fun main() = solve()