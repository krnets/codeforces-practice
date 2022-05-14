fun solve() {
    val password = readln()
    val validPattern = "^(?=.*\\d)" +
            "(?=.*[a-z])" +
            "(?=.*[A-Z])" +
            "(?=.*[^!?.,_])" +
            "(?=\\S+$).{5,}$"
    val isStrong = Regex(validPattern).find(password)

    println(if (isStrong == null) "Too weak" else "Correct")
}

fun main() = solve()