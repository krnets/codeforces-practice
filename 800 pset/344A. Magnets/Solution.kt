fun solve() {
    val n = readInt()
    val magnets = readLines(n)
    var prev = magnets.first()
    var ans = 1

    magnets.forEach {
        if (prev != it) {
            ans++
            prev = it
        }
    }
    println(ans)
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
