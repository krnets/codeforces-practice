fun solve() {
    var ans = 0
    var peopleOnTheTram = 0

    repeat(readInt()) {
        var (exit, enter) = readInts()
        peopleOnTheTram -= exit
        peopleOnTheTram += enter
        ans = Math.max(ans, peopleOnTheTram)
    }
    println(ans)
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun main() = solve()
