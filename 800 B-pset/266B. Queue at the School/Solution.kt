fun solve() {
    val (n, t) = readInts()
    var s = readln().toCharArray()

    repeat(t) {
        var i = 1
        while (i < n) {
            if (s[i - 1] == 'B' && s[i] == 'G') {
                s[i] = s[i - 1].also {
                    s[i - 1] = s[i]
                    i++
                }
            }
            i++
        }
    }
    println(s)
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
