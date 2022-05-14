fun solve() {
    val dubstep = readln()
    var i = 0
    val list = mutableListOf<String>()
    val chunk = StringBuilder()

    while (i < dubstep.length) {

        if (i + 2 < dubstep.length &&
            dubstep.drop(i).take(3) == "WUB"
        ) {
            i += 3
            list.add(chunk.toString())
            chunk.clear()
        } else {
            chunk.append(dubstep[i])
            i++
        }
    }
    list.add(chunk.toString())

    println(list.filterNot { it.isEmpty() }.joinToString(" "))
}

fun main() = solve()