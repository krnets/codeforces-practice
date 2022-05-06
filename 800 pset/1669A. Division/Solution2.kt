fun main() {
    repeat(readLine()!!.toInt()) {
        solve()
    }
}

fun solve() {
    val rating = readLine()!!.toInt()
    println(
        when {
            rating < 1400 -> "Division 4"
            rating < 1600 -> "Division 3"
            rating < 1900 -> "Division 2"
            else -> "Division 1"
        }
    )
}
