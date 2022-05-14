fun solve() {
    val n = readN()
    val phoneNumbers = readLines(n)
    val length = phoneNumbers.first().length
    var ans = 0

    if (length <= 1) {
        println(ans)
        return
    }

    for (col in 0 until length) {
        val x = phoneNumbers.first()[col]

        for (phoneNumber in phoneNumbers) {
            if (phoneNumber[col] != x) {
                println(if (col == 0) ans else ans + 1)
                return
            }
        }
        ans = col
    }
}

fun readN() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }

fun main() = solve()