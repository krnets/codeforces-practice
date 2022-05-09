fun solve() {
    val morse = readln()
    val sb = StringBuilder()
    var i = 0

    while (i < morse.length) {
        if (morse[i] == '.') {
            sb.append(0)
            i++
        } else {
            if (morse[i + 1] == '.')
                sb.append(1)
            else sb.append(2)
            i += 2
        }
    }
    println(sb)
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() = solve()