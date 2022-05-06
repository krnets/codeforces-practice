fun main() {
    repeat(readLine()!!.toInt()) {
        solve()
    }
}

fun solve() {
    val rating = readLine()!!.toInt()
    println(
        when {
            rating <= 1399 -> "Division 4"
            rating <= 1599 -> "Division 3"
            rating <= 1899 -> "Division 2"
            else -> "Division 1"
        }
    )
}
